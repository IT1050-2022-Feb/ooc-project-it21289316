//administrator
#include "staff.h"
class admin : public staff
{
private:
	char admin_userName[20];
	char admin_passcode[20];
	char adminID[10];
	char adminGrade[2];

public:
	admin();
	admin(const char pAdmin_username[], const char pAdmin_passcode[], const char pAdmin_Grade[]);
	void login(const char pAdmin_UsrName, const char pAdmin_pscode);
	void update_Products();
	void update_Appointments();;
	void Delete_purchase();
	void edit_customerDerails();
	void displayAdmin_details();
	~admin();
};

