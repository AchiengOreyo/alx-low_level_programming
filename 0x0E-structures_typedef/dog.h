#ifndef DOG_H

#define DOG_H

/**
 * struct dog - dog data
 * @name: the dog's name
 * @age: the dog's age
 * @owner: name of the dog owner
 *
 * Description: Defines metadata about the dog and dog's struct type
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/* Additional function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
