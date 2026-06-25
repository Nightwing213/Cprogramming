/*
Structures Pracice 

**** Things to do****
study for final exam 

*/
// Room strutures 

#include <stdio.h>

#define MAX_WALLS 10

// ---------------------------
// Structures
// ---------------------------

typedef struct {
    double width, height;
} Rectangle;

typedef struct {
    Rectangle walls[MAX_WALLS];
    int wall_count;
} Room;

// ---------------------------
// Prototypes
// ---------------------------

Rectangle Rectangle_create(double w, double h);
double Rectangle_getPerimeter(const Rectangle* r);
void Rectangle_print(const Rectangle* r);

Room Room_create(void);
void Room_addWall(Room* r, double w, double h);
void Room_print(const Room* r);

double Room_getWallsPerimeter(const Room* r);
void Room_printIntoFile(const Room* r, const char* file_name);

// ---------------------------
// MAIN
// ---------------------------

int main(void) {

    Rectangle r = Rectangle_create(12.5, 10.3);
    Rectangle_print(&r);

    Room living_room = Room_create();
    Room_addWall(&living_room, 10.6, 23.4);
    Room_addWall(&living_room, 11.6, 22.4);
    Room_addWall(&living_room, 12.6, 21.4);
    Room_addWall(&living_room, 13.6, 20.4);

    Room_print(&living_room);

    double p = Room_getWallsPerimeter(&living_room);
    printf("Total walls perimeter: %.2f\n", p);

    Room_printIntoFile(&living_room, "room_output.txt");
    printf("Room info written to room_output.txt\n");

    return 0;
}

// ---------------------------
// Implementations
// ---------------------------

Rectangle Rectangle_create(double w, double h) {
    Rectangle r = { w, h };
    return r;
}

double Rectangle_getPerimeter(const Rectangle* r) {
    return 2 * (r->width + r->height);
}

void Rectangle_print(const Rectangle* r) {
    printf("[%.2lf x %.2lf, Perimeter = %.2lf]\n",
           r->width, r->height, Rectangle_getPerimeter(r));
}

Room Room_create(void) {
    Room room = { .wall_count = 0 };
    return room;
}

void Room_addWall(Room* r, double w, double h) {
    if (r->wall_count >= MAX_WALLS) {
        printf("Cannot have more than %d walls\n", MAX_WALLS);
        return;
    }
    r->walls[r->wall_count++] = Rectangle_create(w, h);
}

void Room_print(const Room* r) {
    printf("%d walls:\n", r->wall_count);
    for (int i = 0; i < r->wall_count; i++) {
        printf("Wall %d: ", i + 1);
        Rectangle_print(&r->walls[i]);
    }
}

double Room_getWallsPerimeter(const Room* r) {
    double total = 0.0;
    for (int i = 0; i < r->wall_count; i++) {
        total += Rectangle_getPerimeter(&r->walls[i]);
    }
    return total;
}

void Room_printIntoFile(const Room* r, const char* file_name) {
    FILE* fp = fopen(file_name, "w");
    if (fp == NULL) {
        printf("Error: could not open file %s\n", file_name);
        return;
    }

    fprintf(fp, "Room Information\n");
    fprintf(fp, "----------------\n");
    fprintf(fp, "Wall count: %d\n\n", r->wall_count);

    for (int i = 0; i < r->wall_count; i++) {
        fprintf(fp, "Wall %d: %.2lf x %.2lf, Perimeter = %.2lf\n",
                i + 1,
                r->walls[i].width,
                r->walls[i].height,
                Rectangle_getPerimeter(&r->walls[i]));
    }

    fprintf(fp, "\nTotal walls perimeter: %.2lf\n",
            Room_getWallsPerimeter(r));

    fclose(fp);
}
