#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30
#define STREET_SIZE 50
#define CITY_SIZE 40
#define CLASS_SIZE 48

// Address structure
typedef struct {
    char street[STREET_SIZE];
    char city[CITY_SIZE];
    int zip_code;
} Address;

// Student structure
typedef struct student {
    char first_name[NAME_SIZE];
    char last_name[NAME_SIZE];
    unsigned age;
    Address home_address;
} Student;

typedef struct {
    int class_size;
    Student student_list[CLASS_SIZE];
} Class;

// Function prototypes
void print(Student s);
void printStudentPointer(const Student* s);
Address createAddress(void);
void printAddress(const Address* adr);
void printClass(const Class* classPtr);

int main(void) {

    Student stud;

    strcpy(stud.first_name, "Bobby");
    strcpy(stud.last_name, "Frost");
    stud.age = 20;

    print(stud);

    // Pointer example
    int b = 1;
    int* pB = &b;
    *pB = 10;

    // Pointer to student
    Student* stud_ptr = &stud;
    printStudentPointer(stud_ptr);

    // Create address interactively
    Address address = createAddress();
    printAddress(&address);

    // Correct designated initializer
    Student aStudent = {
        .age = 25,
        .home_address = { "Orange", "Miami", 33591 }
    };
    strcpy(aStudent.first_name, "Michael");
    strcpy(aStudent.last_name, "Smith");

    printStudentPointer(&aStudent);

    // Corrected bStudent initializer
    Student bStudent = {
        .first_name = "Jack",
        .last_name = "Brown",
        .age = 21,
        .home_address = { "Pine", "Tampa", 34562 }
    };
    printStudentPointer(&bStudent);

    // Class
    Class COP2271;
    COP2271.class_size = 0;

    COP2271.student_list[COP2271.class_size++] = stud;
    COP2271.student_list[COP2271.class_size++] = aStudent;
    COP2271.student_list[COP2271.class_size++] = bStudent;

    printClass(&COP2271);

    return 0;
}

void print(Student s) {
    printf("First name:\t%s\n", s.first_name);
    printf("Last name:\t%s\n", s.last_name);
    printf("Age:\t\t%u\n", s.age);
    printAddress(&s.home_address);
}

void printStudentPointer(const Student* s) {
    printf("First name:\t%s\n", s->first_name);
    printf("Last name:\t%s\n", s->last_name);
    printf("Age:\t\t%u\n", s->age);
    printAddress(&s->home_address);
}

Address createAddress(void) {
    Address adr;

    printf("Enter the street: ");
    scanf("%49s", adr.street);

    printf("Enter the city: ");
    scanf("%39s", adr.city);

    printf("Enter the zip code: ");
    scanf("%d", &adr.zip_code);

    return adr;
}

void printAddress(const Address* adr) {
    printf("%s, %s, %d\n", adr->street, adr->city, adr->zip_code);
}

void printClass(const Class* classPtr) {
    for (int i = 0; i < classPtr->class_size; i++) {
        printStudentPointer(&classPtr->student_list[i]);
    }
}
