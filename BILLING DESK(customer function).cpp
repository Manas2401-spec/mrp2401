/*CUSTOMER SERVICES*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctime>

float owner_netamount=0;
float owner_GSTamount=0;
float owner_billamount=0;
float bill;
int noi=0;
int tno;
char customer_name[30];
char customer_mobno[20];
char name[100];
char mob_no[100];
char tm[100];
char tt[100];
char serial_no[10];
char b_amt[100];
char g_amt[100];
char n_amt[100];
char ob_amt[100];
char og_amt[100];
char on_amt[100];
int j=0;
int k=1;
static char owner_password[100]="MANAS";
void verify_password();
void customer();
void set_password();
void tym();
void verify_password()
{
	char enter_password[20];
	printf("\t\t\t  BILLING DESK\n-----------------------------------------------------------------\n\n");
	printf("ENTER PASSWORD:");
	scanf("%s",enter_password);
	system("cls");
	
	if(strcmp(owner_password,enter_password)==0)
	{
		printf("\nPASSWORD VERIFIED.\n\n");
		system("\npause");
		system("cls");
		customer();
	}
	else
	{	
		printf("\nWRONG PASSWORD!\n");
		int option;
		printf("\n\nSELECT:\n1.FORGET PASSWORD\n2.CANCEL\n\nSELECT OPTION:");
		scanf("%d",&option);
		system("cls");
		if(option==1)
		{
			set_password();
		}
		else
		{
		
			printf("\n\t\t\t\t\tBILLING_DESK\n");
			printf("---------------------------------------------------------------------------------------------------------------------\n\nplease restart to use it again...\n\n");
		}
	}
}

void tym()
{
	
	time_t now=time(0);
	char *dt=ctime(&now);
	printf("%s\n",dt);
	strcpy(tm,dt);
	strcpy(tt,dt);
}

void customer()
{
	FILE *fp;
	fp=fopen("D:/BILLING DESK/BILLING DESK/BILLING DESK APPLICATION/ACCOUNT SHEET.txt","a");
	printf("ENTER KEY:\n0 - EXIT CUSTOMER SERVICE.\n1 - ADD NEW CUSTOMER.\n\nKEY:");
	scanf("%d",&k);
	fputs("\n\n\n",fp);
	time_t now=time(0);
	char *ft=ctime(&now);
	fputs("DATE:- ",fp);
	fputs(ft,fp);
	fputs("\n\n",fp);
	fputs("Customer No.",fp);
	fputs("\t\t\t",fp);
	fputs("Customer Name",fp);
	fputs("\t\t\t",fp);	
	fputs("Customer MobileNo.",fp);
	fputs("\t\t\t",fp);
	fputs("Bill_amt.",fp);
	fputs("\t\t\t",fp);
	fputs("GST(0.05*Bill_amt.)",fp);
	fputs("\t\t\t",fp);
	fputs("Net_amt.(payable inc. all taxes)",fp);
	fputs("\t\t\t",fp);
	fputs("Time of order.",fp);
	fputs("\t\t\t",fp);
	fputs("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------",fp);
	
	system("cls");
	while(k!=0)
	{
	
	printf("'Enjoy the essence of Billing'\n\n\n");
	j++;
	tym();
	printf("\nCustomer No. %d:\n",j);
	printf("---------------\n\n");
	printf("Customer Name:");
	scanf("%s",customer_name);
	printf("Customer Mobile No.:");
	scanf("%s",customer_mobno);
	itoa(j,serial_no,10);
	fputs("\n\n",fp);
	fputs(serial_no,fp);
	fputs("\t\t\t\t",fp);
	fputs(customer_name,fp);
	fputs("\t\t\t\t",fp);	
	fputs(customer_mobno,fp);
	fputs("\t\t\t\t",fp);
	int n,i=1;
	float rate;
	printf("\n\nItem no.\tItem Name    \t\t\tNo. of Orders\n");
	printf("-------------------------------------------------------------\n");
	while(i!=0)
	{
	scanf("%d",&n);
	noi++;
	switch(n)
	{
		case 0:i=0;
		       printf("\n-------------------------------------------------------------\n");
				break;
		case 1:printf("\t\tFrench Fries-110\t\t");
			   scanf("%d",&tno);
			   rate=tno*110;
			   bill=bill+rate;
				break;
		case 2:printf("\t\tCorn Fritters-130\t\t");
				scanf("%d",&tno);
				rate=tno*130;
				bill=bill+rate;
				break;
		case 3:printf("\t\tAloo Dhanya Tikki-130   \t");
				scanf("%d",&tno);
				rate=tno*130;
				bill=bill+rate;
				break;
		case 4:printf("\t\tFish Cube Masala Fry-170  \t");
				scanf("%d",&tno);
				rate=tno*170;
				bill=bill+rate;
				break;
		case 5:printf("\t\tSpicy Prawn Skewers-180   \t");										
				scanf("%d",&tno);
				rate=tno*180;
				bill=bill+rate;
				break;
		case 6:printf("\t\tSquid/ Prawn Tempura-180   \t");
				scanf("%d",&tno);
				rate=tno*180;
				bill=bill+rate;
				break;
		case 7:printf("\t\tButterfly Prawns-180\t\t");
				scanf("%d",&tno);
				rate=tno*180;
				bill=bill+rate;
				break;
		case 8:printf("\t\tShrimp Cocktail-180\t\t");
				scanf("%d",&tno);
				rate=tno*180;
				bill=bill+rate;
				break;
		case 9:printf("\t\tDragon Soup-120\t\t\t");
				scanf("%d",&tno);
				rate=tno*120;
				bill=bill+rate;
				break;
		case 10:printf("\t\tTomato and Basil Soup-120  \t");
				scanf("%d",&tno);
				rate=tno*120;
				bill=bill+rate;
				break;
		case 11:printf("\t\tGazpacho-120\t\t\t");
				scanf("%d",&tno);
				rate=tno*120;
				bill=bill+rate;
				break;
		case 12:printf("\t\tCock-a-leekie-150 \t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 13:printf("\t\tSweet Corn Chicken Soup-150  \t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 14:printf("\t\tPrawn Bisque-160\t\t");
				scanf("%d",&tno);
				rate=tno*160;
				bill=bill+rate;
				break;
		case 15:printf("\t\tPrawn and Mushroom Soup-160  \t");
				scanf("%d",&tno);
				rate=tno*160;
				bill=bill+rate;
				break;
		case 16:printf("\t\tSeafood Chowder-175\t\t");
				scanf("%d",&tno);
				rate=tno*175;
				bill=bill+rate;
				break;
		case 17:printf("\t\tGarden Green-120\t\t");
				scanf("%d",&tno);
				rate=tno*120;
				bill=bill+rate;
				break;
		case 18:printf("\t\tFruit Cabiana-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 19:printf("\t\tHawaiian Salad-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 20:printf("\t\tCurried Baby Potato Salad-150  \t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 21:printf("\t\tPrawn and Papaya Salad-180  \t");
				scanf("%d",&tno);
				rate=tno*180;
				bill=bill+rate;
				break;
		case 22:printf("\t\tThai Spicy Shrimp Salad-180  \t");
				scanf("%d",&tno);
				rate=tno*180;
				bill=bill+rate;
				break;
		case 23:printf("\t\tGreek Salad-195\t\t\t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=bill+rate;
				break;
		case 24:printf("\t\tDal Palak-125\t\t\t");
				scanf("%d",&tno);
				rate=tno*125;
				bill=bill+rate;
				break;
		case 25:printf("\t\tDiwani Hundi-125\t\t");
				scanf("%d",&tno);
				rate=tno*125;
				bill=bill+rate;
				break;
		case 26:printf("\t\tMethi Baigan Masala-125   \t");
				scanf("%d",&tno);
				rate=tno*125;
				bill=bill+rate;
				break;
		case 27:printf("\t\tPaneer Aap ki Pasand-150  \t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 28:printf("\t\tKofta Noorjahani-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 29:printf("\t\tRatatouille-175\t\t\t");
				scanf("%d",&tno);
				rate=tno*175;
				bill=bill+rate;
				break;
		case 30:printf("\t\tTofu Green Curry-175   \t\t");
				scanf("%d",&tno);
				rate=tno*175;
				bill=bill+rate;
				break;
		case 31:printf("\t\tAppam with Vegetable Stew- 175  ");
				scanf("%d",&tno);
				rate=tno*175;
				bill=bill+rate;
				break;
		case 32:printf("\t\tChicken\n\t\tginger/garlic-195\n\t\t/chilly/szechuan-195\t\t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=bill+rate;
				break;
		case 33:printf("\t\tMalabar Kozhi Curry-195\t\t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=bill+rate;
				break;
		case 34:printf("\t\tChicken Mappas-195\t\t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=bill+rate;
				break;
		case 35:printf("\t\tKadai Murg-195\t\t\t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=bill+rate;
				break;
		case 36:printf("\t\tChicken a-la-King-245\t\t");
				scanf("%d",&tno);
				rate=tno*245;
				bill=bill+rate;
				break;
		case 37:printf("\t\tAppam with Chicken Stew-245  \t");
				scanf("%d",&tno);
				rate=tno*245;
				bill=bill+rate;
				break;
		case 38:printf("\t\tGrilled Garlic Chicken-245   \t");
				scanf("%d",&tno);
				rate=tno*245;
				bill=bill+rate;
				break;
		case 39:printf("\t\tHoney Glazed Chicken-245   \t");
				scanf("%d",&tno);
				rate=tno*245;
				bill=bill+rate;
				break;
		case 40:printf("\t\tAlleppey Fish Curry-225   \t");
				scanf("%d",&tno);
				rate=tno*225;
				bill=bill+rate;
				break;
		case 41:printf("\t\tTravancore Fish Roast-225\t");
				scanf("%d",&tno);
				rate=tno*225;
				bill=bill+rate;
				break;
		case 42:printf("\t\tMasala Fried Fish-225   \t");
				scanf("%d",&tno);
				rate=tno*225;
				bill=bill+rate;
				break;
		case 43:printf("\t\tSea Food Ularthiyathu-250   \t");
				scanf("%d",&tno);
				rate=tno*250;
				bill=bill+rate;
				break;
		case 44:printf("\t\tMalabar Prawn Curry-275   \t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 45:printf("\t\tCatch of the day\n\t\tin Banana Leaves-325\t\t");
				scanf("%d",&tno);
				rate=tno*325;
				bill=bill+rate;
				break;
		case 46:printf("\t\tGrilled Fish Steak-350   \t");
				scanf("%d",&tno);
				rate=tno*350;
				bill=bill+rate;
				break;
		case 47:printf("\t\tGrilled Tiger Prawn-425   \t");
				scanf("%d",&tno);
				rate=tno*425;
				bill=bill+rate;
				break;
		case 48:printf("\t\tFish Platter-650\t\t");
				scanf("%d",&tno);
				rate=tno*650;
				bill=bill+rate;
				break;
		case 49:printf("\t\tKerala Fish Platter-750   \t");
				scanf("%d",&tno);
				rate=tno*750;
				bill=bill+rate;
				break;
		case 50:printf("\t\tPrawn Platter-950\t\t");
				scanf("%d",&tno);
				rate=tno*950;
				bill=bill+rate;
				break;
		case 51:printf("\t\tSeafood Platter-950\t\t");
				scanf("%d",&tno);
				 rate=tno*950;
				 bill=bill+rate;
				 break;
		case 52:printf("\t\tSeafood Platter with Lobster-1250\t");
				scanf("%d",&tno);
				rate=tno*1250;
				bill=bill+rate;
				break;
		case 53:printf("\t\tBeef ( chilly, garlic/Szechuan)-195  \t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=bill+rate;
				break;
		case 54:printf("\t\tTraditional Beef Curry-195   \t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=bill+rate;
				break;
		case 55:printf("\t\tBeef Ularthiyathu-195\t\t");
				scanf("%d",&tno);
				rate=tno*195;
				bill=tno*bill+rate;
				break;
		case 56:printf("\t\tBeef Stir Fried-245   \t\t");
				scanf("%d",&tno);
				rate=tno*245;
				bill=bill+rate;
				break;
		case 57:printf("\t\tThai Beef Curry-245   \t\t");
				scanf("%d",&tno);
				rate=tno*245;
				bill=bill+rate;
				break;
		case 58:printf("\t\tTenderloin Steak-290\t\t");
				scanf("%d",&tno);
				rate=tno*290;
				bill=bill+rate;
				break;
		case 59:printf("\t\tPenne-275 \t\t\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 60:printf("\t\tSpaghetti-275 \t\t\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 61:printf("\t\tFusili-275\t\t\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 62:printf("\t\tMacaroni with Arabiata :\n\t    Tomato and beacon bites -275\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 63:printf("\t\tMacaroni with Marinara :\n\t\tSeafood and tomato -275\t\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 64:printf("\t\tMacaroni with Florentine :\n\t    Spinach, mushroom and cream -275\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 65:printf("\t\tMacaroni with Bolognese:\n\t\tMinced beef-275\t\t\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 66:printf("\t\tMacaroni with Napolitano:\n\t\tTomato -275\t\t\t");
				scanf("%d",&tno);
				rate=tno*275;
				bill=bill+rate;
				break;
		case 67:printf("\t\tBread :Kerala\n\t\tParatha/Chappathi-30\n\t\t/Pulka/Tava Paratha-30\t\t");
				scanf("%d",&tno);
				rate=tno*30;
				bill=bill+rate;
				break;
		case 68:printf("\t\tRice : Nutty\n\t\tlemon/jeera-90\n\t\t/coconut/tomato-90\t\t");
				scanf("%d",&tno);
				rate=tno*90;
				bill=bill+rate;
				break;
		case 69:printf("\t\tPulao:\n\t\tMushroom/Kashmiri-110\n\t\t/Vegetable-110\t\t\t");
				scanf("%d",&tno);
				rate=tno*110;
				bill=bill+rate;
				break;
		case 70:printf("\t\tSandwich:\n\t\tVegetable/cheese/egg-90\t\t");
				scanf("%d",&tno);
				rate=tno*90;
				bill=bill+rate;
				break;
		case 71:printf("\t\tSandwich:Chicken-120\t\t");
				scanf("%d",&tno);
				rate=tno*120;
				bill=bill+rate;
				break;
		case 72:printf("\t\tSandwich:Club-165\t\t");
				scanf("%d",&tno);
				rate=tno*165;
				bill=bill+rate;
				break;
		case 73:printf("\t\tFried Rice :\n\t\tChicken/mixed/Szechuan-175\t");
				scanf("%d",&tno);
				rate=tno*175;
				bill=bill+rate;
				break;
		case 74:printf("\t\tNoodles:\n\t\tChicken/Mixed-175\n\t\t/Szechuan/Curried-175\t\t");
				scanf("%d",&tno);
				rate=tno*175;
				bill=bill+rate;
				break;
		case 75:printf("\t\tBiriyani:Vegetable-125\t\t");
				scanf("%d",&tno);
				rate=tno*125;
				bill=bill+rate;
				break;
		case 76:printf("\t\tBiriyani:Fish/chicken-175\t");
				scanf("%d",&tno);
				rate=tno*175;
				bill=bill+rate;
				break;
		case 77:printf("\t\tBiriyani:Prawn-225\t\t");
				scanf("%d",&tno);
				rate=tno*225;
				bill=bill+rate;
				break;
		case 78:printf("\t\tChoice of Ice creams-90  \t");
				scanf("%d",&tno);
				rate=tno*90;
				bill=bill+rate;
				break;
		case 79:printf("\t\tAssorted fruit platter-90   \t");
				scanf("%d",&tno);
				rate=tno*90;
				bill=bill+rate;
				break;
		case 80:printf("\t\tGulab Jamun-90\t\t\t");
				scanf("%d",&tno);
				rate=tno*90;
				bill=bill+rate;
				break;
		case 81:printf("\t\tPumpkin Halwa-110\t\t");
				scanf("%d",&tno);
				rate=tno*110;
				bill=bill+rate;
				break;
		case 82:printf("\t\tFruit Skewers-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 83:printf("\t\tFlambeed Banana-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 84:printf("\t\tFlambeed Pineapple-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 85:printf("\t\tChocolate Fudge-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 86:printf("\t\tDessert of the Day-150\t\t");
				scanf("%d",&tno);
				rate=tno*150;
				bill=bill+rate;
				break;
		case 87:printf("\t\tTea:\n\t\tPlain/masala-45\n\t\t/ginger/cardamom-45\t\t");
				scanf("%d",&tno);
				rate=tno*45;
				bill=bill+rate;
				break;
		case 88:printf("\t\tCoffee:\n\t\tSouth Indian-50\n\t\t/freshly brewed-50\t\t");
				scanf("%d",&tno);
				rate=tno*50;
				bill=bill+rate;
				break;
		case 89:printf("\t\tFlavored Ice Tea:\n\t\t(Mint/lime/ginger)-75\t\t");
				scanf("%d",&tno);
				rate=tno*75;
				bill=bill+rate;
				break;
		case 90:printf("\t\tHigh Range Twist-75\t\t");
				scanf("%d",&tno);
				rate=tno*75;
				bill=bill+rate;
				break;
		case 91:printf("\t\tMalabar Shades-75\t\t");
				scanf("%d",&tno);
				rate=tno*75;
				bill=bill+rate;
				break;
		case 92:printf("\t\tHot/Cold Chocolate-90\t\t");
				scanf("%d",&tno);
				rate=tno*90;
				bill=bill+rate;
				break;
		case 93:printf("\t\tSeasonal Fruit Juice-90   \t");
				scanf("%d",&tno);
				rate=tno*90;
				bill=bill+rate;
				break;
		case 94:printf("\t\tVirgin Pina Colada-110   \t");
				scanf("%d",&tno);
				rate=tno*110;
				bill=bill+rate;
				break;
		case 95:printf("\t\tPacked Drinking Water-45   \t");
				scanf("%d",&tno);
				rate=tno*45;
				bill=bill+rate;
				break;
		case 96:printf("\t\tSoft Drinks:\n\t\tCokeLimeFanta-45\t\t");
				scanf("%d",&tno);
				rate=tno*45;
				bill=bill+rate;
				break;
		default:printf("INVALID CHOICE\n\n");
		printf("\n-------------------------------------------------------------\n");
				i=0;
				break;																																																																																				 																																																																																		
	}
}
float amount=bill;
float gst=(0.05*bill);
float net_amt=bill+(0.05*bill);
itoa(amount,b_amt,10);
itoa(gst,g_amt,10);
itoa(net_amt,n_amt,10);
owner_billamount=owner_billamount+amount;
owner_GSTamount=owner_GSTamount+gst;;
owner_netamount=owner_netamount+net_amt;
itoa(owner_billamount,ob_amt,10);
itoa(owner_GSTamount,og_amt,10);
itoa(owner_netamount,on_amt,10);
printf("\nNo. of items=%d\n\n\nBill_Amt. =\t\t\t\t\t%f\n\nGST_charge(0.05 of the bill amt. charged) =\t%f\n--------------------------------------------\nNet Amt.(payable inclusive all taxes) =\t\t%0.2f\n\n",noi-1,amount,gst,net_amt);
			
	fputs(b_amt,fp);
	fputs("\t\t\t\t",fp);
	fputs(g_amt,fp);
	fputs("\t\t\t\t\t",fp);
	fputs(n_amt,fp);
	fputs("\t\t\t\t\t\t",fp);
	fputs(tm,fp);

	
system("\npause");
system("cls");
printf("ENTER:\n0 - EXIT CUSTOMER SERVICE.\n1 - ADD NEW CUSTOMER.\n\nKEY:");
scanf("%d",&k);
system("cls");
}
tym();
printf("Total no.of Customers =\t\t\t\t\t%d\n\n\n",j);
printf("Total Billing_Amt. =\t\t\t\t\t%f\n\nTotal GST_charged(0.05 of the bill amt. charged) =\t%f\n--------------------------------------------\nNet Amt.(collected inclusive all taxes) =\t\t%0.2f\n\n",owner_billamount,owner_GSTamount,owner_netamount);
fputs("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n",fp);
fputs("Net Transaction:",fp);
fputs("\t\t\t\t\t\t\t\t\t\t\t",fp);
fputs(ob_amt,fp);
fputs("\t\t\t\t",fp);
fputs(og_amt,fp);
fputs("\t\t\t\t\t",fp);
fputs(on_amt,fp);
fputs("\t\t\t\t\t\t",fp);
fputs(tm,fp);
fputs("(ACCOUNT CLOSED)",fp);
fputs("\n\n\n\n",fp);

system("\n\npause");
system("cls");
printf("\n\n\n\n\n\n\n\t\t\t\t\t\tTHANK YOU!\n\n\t\t\t\t\t\tHave a nice day!\n\n\n\n\n");
}

void set_password()
{
	char myschool[100];
	char mynumber[100];	
	printf("\nANSWER THE QUESTIONS:\n\n");
	printf("1.WHAT IS  YOUR REGISTERED MOBILE NUMBER?\nA) ");
	scanf("%d",mynumber);
	printf("2.WHAT IS  YOUR FIRST SCHOOLS NAME?\nA) ");
	scanf("%s",myschool);
	system("cls");
	if(strcmp(mynumber,"8763305895") && strcmp(myschool,"SHS")==0)
	{
		printf("\n\nANSWERS VERIFIED!\n\n");
		system("cls");
	    {
	    	printf("CREATE NEW PASSWORD:\n\n");
		    char new_password[100];
		    char renew_password[100];
			comehere:
		    printf("\n\nNEW PASSWORD:");
		    scanf("%s",new_password);
		    printf("RE-TYPE NEW PASSWORD:");
		    scanf("%s",renew_password);
		    if(strcmp(new_password,renew_password)==0)
		    {
			    strcpy(owner_password,new_password);
			    printf("\n\n");
			    system("cls");
			    verify_password();
		    }
		    else
		    {
		    	printf("\n\nPLEASE RETYPE:\n");
		    	goto comehere;	
			}
	    }
	}
	else
	{
	printf("ACCESS DENIED!\n\nplease restart the application...\n");
	}
	
}


int main()
{
	verify_password();
	return 0;
}
