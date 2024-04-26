#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that is to crate info of a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Descript: the first struct
 */

/**
 * dog_t - new name for struct dog
 */


typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;


};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
