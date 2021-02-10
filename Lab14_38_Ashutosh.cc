#include <cstdio> 
#define MAX_NAME 20

using namespace std;

class person{
public:
	int id;
	char name[MAX_NAME];
};

class student: public person
{
public:
	/*There is no specific task described in question of lab number 14 to do in student class, hence I'm keeping it as it is.*/
};
class faculty: public person
{
public:
	int salary;
	void set_faculty_id(int id)
	{
		this->id = id;
	}
	void set_faculty_name(char name[MAX_NAME])
	{
		this->name = name;
	}
};
class  grades:public student, public faculty
{
public:
	 grades();
	 void display()
	 {
	 	printf("\n\nName of faculty is: %s\nId of faculty is: %d\n\n",::faculty,::id);
	 }
	~ grades()
	{
		printf("\n\n*******Object destroying********\n\n");
	}
	
};

int main(int argc, char const *argv[])
{
	int id;
	char name[MAX_NAME];
	grades *obj = new grades();
	printf("Set the id of faculty\n");
	scanf("%d",&id);
	printf("Set the name of faculty\n");
	scanf("%[^\n]%*c",&name);
	obj->set_faculty_id(id);
	obj->set_faculty_name(name);
	obj->display();
	delete obj;
	return 0;
}