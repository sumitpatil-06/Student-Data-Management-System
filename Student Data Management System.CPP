
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

class person
{
    protected :
    char fn[20], mn[20], ln[20], bd[11], addr[100], eid[20], mb[11];

    void setfn()
    {
	cout<<"\n First Name\t: ";
	gets(fn);
    }
    char* getfn()
    {
	return fn;
    }
    void setmn()
    {
	cout<<"\n Middle Name\t: ";
	gets(mn);
    }
    char* getmn()
    {
	return mn;
    }
    void setln()
    {
	cout<<"\n Last Name\t: ";
	gets(ln);
    }
    char* getln()
    {
	return ln;
    }
    void setbd()
    {
	cout<<"\n Birth date [DD/MM/YYYY]: ";
	gets(bd);
    }
    char* getbd()
    {
	return bd;
    }
    void setaddr()
    {
	cout<<"\n Address\t: ";
	gets(addr);
    }
    char* getaddr()
    {
	return addr;
    }
    void seteid()
    {
	cout<<"\n Email Id\t: ";
	gets(eid);
    }
    char* geteid()
    {
	return eid;
    }
    void setmb()
    {
	cout<<"\n Mobile Number\t: ";
	gets(mb);
    }
    char* getmb()
    {
	return mb;
    }
    void fullname()
    {
	cout<<getfn()<<" "<<getmn()<<" "<<getln();
    }
};

class student : public person
{
    protected:
    int  rn, sub1, sub2, sub3, sub4, sub5, sub6;
    char dept[10];
    long paidf, prn;

    void setrn()
    {
	cout<<"\n Enter Roll Number : ";
	cin>>rn;
    }
    int getrn()
    {
	return rn;
    }
    void setsub1()
    {
	cout<<"\n\tSubject 1 : ";
	cin>>sub1;
    }
    int getsub1()
    {
	return sub1;
    }
    void setsub2()
    {
	cout<<"\n\tSubject 2 : ";
	cin>>sub2;
    }
    int getsub2()
    {
	return sub2;
    }
    void setsub3()
    {
	cout<<"\n\tSubject 3 : ";
	cin>>sub3;
    }
    int getsub3()
    {
	return sub3;
    }
    void setsub4()
    {
	cout<<"\n\tSubject 4 : ";
	cin>>sub4;
    }
    int getsub4()
    {
	return sub4;
    }
    void setsub5()
    {
	cout<<"\n\tSubject 5 : ";
	cin>>sub5;
    }
    int getsub5()
    {
	return sub5;
    }
    void setpaidf()
    {
	cout<<"\n Fees Paid\t: ";
	cin>>paidf;
    }
    long getpaidf()
    {
	return paidf;
    }

    void setprn()
    {
	cout<<"\n PRN Number\t: ";
	cin>>prn;
    }
    long getprn()
    {
	return prn;
    }
    void setdept()
    {
	cout<<"\n Department\t: ";
	gets(dept);
    }
    char* getdept()
    {
	return dept;
    }

    void setmark()
    {
	cout<<"\n Enter last SEM marks :";
	setsub1();
	setsub2();
	setsub3();
	setsub4();
	setsub5();
    }
    void getmark()
    {
	cout<<"\n Last SEM marks :\t";
	cout<<"\n\tSubject 1 : "<<getsub1();
	cout<<"\n\tSubject 2 : "<<getsub2();
	cout<<"\n\tSubject 3 : "<<getsub3();
	cout<<"\n\tSubject 4 : "<<getsub4();
	cout<<"\n\tSubject 5 : "<<getsub5();
    }



};

class BSc : public student
{

};

class FYBSc : public BSc
{

};

class SYBSc : public BSc
{

};

class TYBSc : public BSc
{

};

class BCA : public student
{

};

class FYBCA : public BCA
{

};

class SYBCA : public BCA
{

};

class TYBCA : public BCA
{

};

class Engg : public student
{

};

class FE : public Engg
{
    public:
    void setinfo()
    {
	cout<<"\n Personal Information \n";
	setfn();
	setmn();
	setln();
	setbd();
	setaddr();
	setmb();
	seteid();
	system("CLS");
	cout<<"\n Acadmic Information :\n";
	setdept();
	setprn();
	setpaidf();
	setmark();
    }
    void getinfo()
    {
	system("CLS");
	cout<<"\n Personal Information \n";
	cout<<"\n Full Name\t: ";  fullname();
	cout<<"\n Birth Date\t: "<<getbd();
	cout<<"\n Address\t: "<<getaddr();
	cout<<"\n Mobile\t\t: "<<getmb();
	cout<<"\n Email Id\t: "<<geteid();
	cout<<"\n\n Acadmic Information :\n";
	cout<<"\n Department\t: "<<getdept();
	cout<<"\n PRN\t\t: "<<getprn();
	cout<<"\n Fees Paid\t: "<<getpaidf();
	getmark();
	getch();
    }
    void set_rn(int i)
    {
	rn=i;
    }

    int checkrn(int i)
    {
	if(rn==i)
		return 1;
	else
		return 0;
    }

    void editfn()
    {
	setfn();
    }
    void editmn()
    {
	setmn();
    }
    void editln()
    {
	setln();
    }
    void editbd()
    {
	setbd();
    }
    void editaddr()
    {
	setaddr();
    }
    void editmb()
    {
	setmb();
    }
    void editeid()
    {
	seteid();
    }
    void editdept()
    {
	setdept();
    }
    void editpaidf()
    {
	setpaidf();
    }
    void editmark()
    {
	setmark();
    }
    void editprn()
    {
	setprn();
    }

};

class SE : public Engg
{

};

class TE : public Engg
{

};

class BE : public Engg
{

};


class employee : public person
{

};

class WageEmp : public employee
{

};

class SalariedEmp : public employee
{

};

void saved();
void editmenu();
void record();

int main ()
{
    int ch, i;
    FE fe[60];

    do{ mainmenu :    system("CLS");
	cout<<"\n\n======= MAIN MENU =======";
	cout<<"\n\n 1. Student";
	cout<<"\n 2. Employee";
	cout<<"\n 3. Exit";
	cout<<"\n\n Enter your choice : ";
	cin>>ch;

	switch(ch)
	{
	    case 1: do{ studmenu :    system("CLS");
			cout<<"\n\n===== STUDENT MENU =====";
			cout<<"\n\n 1. BSc Student";
			cout<<"\n 2. BCA Student";
			cout<<"\n 3. Engg Student";
			cout<<"\n 4. Back";
			cout<<"\n 5. Exit";
			cout<<"\n\n Enter your choice : ";
			cin>>ch;

			switch(ch)
			{
			    case 1: do{ system("CLS");
					cout<<"\n\n======= BSC MENU =======";
					cout<<"\n\n 1. FYBSc Student";
					cout<<"\n 2. SYBSc Student";
					cout<<"\n 3. TYBSc Student";
					cout<<"\n 4. Back";
					cout<<"\n 5. Exit";
					cout<<"\n\n Enter your choice : ";
					cin>>ch;
				    }while(ch>5);
				    break;

			    case 2: do{ system("CLS");
					cout<<"\n\n======= BCA MENU =======";
					cout<<"\n\n 1. FYBCA Student";
					cout<<"\n 2. SYBCA Student";
					cout<<"\n 3. TYBCA Student";
					cout<<"\n 4. Back";
					cout<<"\n 5. Exit";
					cout<<"\n\n Enter your choice : ";
					cin>>ch;
				    }while(ch>5);
				    break;

			    case 3: do{ enggmenu :
					system("CLS");
					cout<<"\n\n===== ENGNEERING MENU =====";
					cout<<"\n\n 1. FE Student";
					cout<<"\n 2. SE Student";
					cout<<"\n 3. TE Student";
					cout<<"\n 4. BE Student";
					cout<<"\n 5. Back";
					cout<<"\n 6. Exit";
					cout<<"\n\n Enter your choice : ";
					cin>>ch;

					switch(ch)
					{
					    case 1:
							FEstud:
							do{  system("CLS");
							cout<<"\n\n====== FE STUDENT ======";
							record();
							cin>>ch;

							switch(ch)
							{

							    case 1: system("CLS");
								    cout<<"\n Enter Roll Number : ";
								    cin>>i;
								    fe[i].set_rn(i);
								    fe[i].setinfo();
								    saved();
								    goto FEstud;

							    case 2: system("CLS");
								    cout<<"\n Enter Roll Number : ";
								    cin>>i;
								    if(fe[i].checkrn(i)==0)
								    {
									cout<<"\n Record Not found !";
									getch();
								    }
								    else
									fe[i].getinfo();
								    goto FEstud;

							    case 3: system("CLS");
								    cout<<"\n Enter Roll Number : ";
								    cin>>i;
								    if(fe[i].checkrn(i)==0)
								    {
									cout<<"\n  Record Not found !";
									getch();
								    }
								    else
								    {
									do{
									editmenu:
									editmenu();
									cin>>ch;

									switch(ch)
									{
										case 1: system("CLS");
											fe[i].editfn();
											saved();
											goto editmenu;

										case 2: system("CLS");
											fe[i].editmn();
											saved();
											goto editmenu;

										case 3: system("CLS");
											fe[i].editln();
											saved();
											goto editmenu;

										case 4: system("CLS");
											fe[i].editbd();
											saved();
											goto editmenu;

										case 5: system("CLS");
											fe[i].editmb();
											saved();
											goto editmenu;

										case 6: system("CLS");
											fe[i].editeid();
											saved();
											goto editmenu;

										case 7: system("CLS");
											fe[i].editaddr();
											saved();
											goto editmenu;

										case 8: system("CLS");
											fe[i].editdept();
											saved();
											goto editmenu;

										case 9: system("CLS");
											fe[i].editprn();
											saved();
											goto editmenu;

										case 10: system("CLS");
											 fe[i].editpaidf();
											 saved();
											 goto editmenu;

										case 11: system("CLS");
											 fe[i].editmark();
											 saved();
											 goto editmenu;

										case 12: goto FEstud;

										case 13: exit(0);

										default: cout<<"\n\n Enter valid choice !!!";
											 getch();

									}

									}while(ch>13);
									break;
								    }

							    case 4: goto enggmenu;

							    case 5: exit(0);

							    default: cout<<"\n\n Enter valid choice !!!";
								     getch();

							}

						    }while(ch>5);
						    break;

					    case 2: break;

					    case 3: break;
					    case 4: break;
					    case 5: goto studmenu;

					    case 6: exit(0);

					    default: cout<<"\n Enter valid choice !!!";
						     getch();
					}

				    }while(ch>6);
				    break;

			    case 4: goto mainmenu;

			    case 5: exit(0);

			    default : cout<<"\n Enter valid choice !!!";
				      getch();
			}

		    }while(ch>5);
		    break;

	    case 2: do{ system("CLS");
			cout<<"\n\n======= EMPLOYEE MENU =======";
			cout<<"\n\n 1. Wage Employee";
			cout<<"\n 2. Salaried Employee";
			cout<<"\n 3. Back";
			cout<<"\n 4. Exit";
			cout<<"\n\n Enter your choice : ";
			cin>>ch;

			switch(ch)
			{
			    case 1: break;

			    case 2: break;

			    case 3: goto mainmenu;

			    case 4: exit(0);

			    default: cout<<"\n Enter valid choice !!!";
				     getch();
			}

		    }while(ch>4);
		    break;

	    case 3: exit(0);

	    default: cout<<"\n Enter valid choice !!!";
		     getch();
	}

    }while(ch>3);

}

void record()
{
    cout<<"\n\n 1. Insert Record";
    cout<<"\n 2. Veiw Record";
    cout<<"\n 3. Edit Record";
    cout<<"\n 4. Back";
    cout<<"\n 5. Exit";
    cout<<"\n\n Enter your choice : ";
}

void editmenu()
{

    system("CLS");
    cout<<"\n\n======= EDIT MENU =======";
    cout<<"\n\n 1. First name";
    cout<<"\n 2. Middle name";
    cout<<"\n 3. Last name";
    cout<<"\n 4. Birth Date";
    cout<<"\n 5. Mobile no.";
    cout<<"\n 6. Email ID";
    cout<<"\n 7. Address";
    cout<<"\n 8. Department";
    cout<<"\n 9. PRN";
    cout<<"\n 10. Fees Paid";
    cout<<"\n 11. Marks";
    cout<<"\n 12. Back";
    cout<<"\n 13. Exit";
    cout<<"\n\n Enter your choice : ";

}


void saved()
{
    cout<<"\n\n  Data saved successfuly !";
    cout<<"\n  Press enter to go back...";
    getch();
}







