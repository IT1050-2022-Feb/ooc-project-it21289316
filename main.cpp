#include"appointment.h"
#include"stocks.h"
#include"supplier.h"
#include"customer.h"
#include"staff.h"
#include"purchase.h"
#include"user.h"
#include"payment.h"
#include"report.h"


#include<iostream>
using namespace std;

int main()
{
	//Object creation

	purchase* purch = new purchase();
	Staffs* staff = new Staff();
	admins*admin = new admin();


	
	staff->login(); 
	staff->displaySupplyDetails();
	staff->logout(); 
	purch->updatePurchase_Details();
	purch->DisplayPurchase_Details();
	purch->checkProduct_Availability();
	purch->checkAppointment_Availability();
	purch->calculatPurchase_amount();
	purch->deletePurchase_details();
	admin->login();
	admin->update_Products();
	admin->update_Appointments();
	admin->Delete_purchase();
	admin->edit_customerDerails();
	admin->displayAdmin_details();
	admin->displayAdmin_details();

	delete admin; 
	delete staff; 
	delete purchase; 

	return 0;
}

