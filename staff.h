//staff
#include "purchase.h"
#define SIZE 4

class staff
{
protected:
	int staffID;
	char staff_Fname[20];
	char staff_Lname[20];
	char staff_phone[10];
	char staff_userName[20];
	char staff_password[20];


	purchase* purch[SIZE];


public:
	staff();
	void displayCustomerDetails();
	void logout();
	void login();
	staff(char pstaffID, const char pstaff_Fname[], const char pstaff_Lname[], const char pstaff_phone[, const char pstaff_userName[], const charpstaff_password[]);
	void make(purchase* purch_service);
};

