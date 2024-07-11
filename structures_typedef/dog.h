#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - structure
 * @name: name of dog
 * @age: age of dog
 * @owner: proprio
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);

#endif
