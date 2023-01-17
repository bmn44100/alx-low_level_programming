/**
 * struct dog - describing a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: I am descibing a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - typedef struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: I am descibing a dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
