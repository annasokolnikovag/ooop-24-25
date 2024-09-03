#include <stdio.h>

 struct Client {
	int client_id;
	const char *name;
	const char *city;
	int rating;
	int manager_id;
} ;

int main() {
	struct Client person = {2001, "Антонов", "Владимир", 100, 1001};
	printf("client_id = %d, name = %s, city = %s, rating = %d, manager_id = %d\n",
		person.client_id, person.name, person.city, person.rating, person.manager_id);

	return 0;
}
