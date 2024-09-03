#include <stdio.h>

struct Order {
    int order_id;
    int manager_id;
    int client_id;
    const char *order_date;
    doudle amount;
};

int main() {
    struct Order one = {3001, 1007, 2001, "3.10.2006", "18.69"};
	printf("order_id = %d, manager_id = %d, client_id = %d, order_date = %s, amount = %.2f\n",
		one.order_id, one.manager_id, one.client_id, one.order_date, one.amount);




    return 0;
}
