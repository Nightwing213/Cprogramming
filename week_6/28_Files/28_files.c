/*
Notes:
fopen - open the file
fprintf - 
fscan - 
feof - 
fclose - close the file
cat name of file
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    FILE* file = fopen("output.txt", "w");
    if (file == NULL) {
        puts("File cannot be opened");
        return 1;
    }

    srand(time(NULL)); // Seed random number generator

    char* verbs[10] = {"jump", "whisper", "glide", "twist", "spark", "drift", "climb", "bounce", "paint", "soar"};
    char* adjectives[10] = {"bright", "silent", "fragile", "swift", "warm", "gloomy", "vivid", "gentle", "brave", "crisp"};
    char* nouns[10] = {"river", "lantern", "cloud", "garden", "mirror", "feather", "mountain", "shadow", "flame", "path"};

    for (int i = 0; i < 10; i++) {
        fprintf(file, "%s %s %s\n",
                adjectives[rand() % 10],
                nouns[rand() % 10],
                verbs[rand() % 10]);
    }

    fclose(file);
    return 0;
}
