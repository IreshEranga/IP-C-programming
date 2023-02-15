#include <stdio.h>
	struct item{
	int itemNo;
	double price;
	int quantity;
	}item1, item2;
	
int main()
{
	item1.itemNo = 1;
	item1.price = 10.00;
	item1.quantity = 12;
	item2.itemNo=2;
	item2.price=15.00;
	item2.quantity=4;
  
	printf("item 1 item No: %d\n", item1.itemNo);
	printf("item 1 price: %.2f\n", item1.price);
	printf("item 1 quantity: %d\n", item1.quantity);
	printf("item 2 item No: %d\n", item2.itemNo);
	printf("item 2 price: %.2f\n", item2.price);
	printf("item 2 quantity: %d\n", item2.quantity);
	
	printf("\n\nItem No\t\tPrice\t        Quantity\n");
	printf("%d\t\t%.2f\t\t%d\n%d\t\t%.2f\t\t%d",item1.itemNo,item1.price,item1.quantity,item2.itemNo,item2.price,item2.quantity);
	
	return 0;
}
