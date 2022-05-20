//puchase
#include "apponiment."
#include "stocks.h"
#include "supplier.h"
#include"customer.h"
#include"staff.h"

#define SIZE1 3
#define SIZE2 3

class purchase
{
private:
	int purchaseID;
	char purchase_service[50];
	char purchase_amount[10];
	char purchase_date[6];
	char purchase_prescription[50];
	char product_status[50];
	char appontment_status[50];


	appointment* appNO[SIZE];
	stocks* productNO[SIZE];
	supplier* supplier;
	customer* customer;
	staff* staff;


public:
	purchase();
	purchase(int productNO1, int productNO2, int appNO1, int appNO2, supplier* psupplier, customer* pcustomer, staff* pstaff);
	void purchase(int purchaseID, const char purchase_service[], const char purchase_amount[], const char purchase_date[], const const purchase_prescription[], supplier* psupplier, customer* pcustomer, staff* pstaff);
	void checkProduct_Availability();
	void checkAppointment_Availability();
	void calculatPurchase_amount();
	void updatePurchase_details();
	void DisplayPurchase_details();
	void deletePurchase_details();
	~purchase();

};
