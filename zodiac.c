#include<stdio.h>
#include<conio.h>

void main()
{
		int d,m,f=0;
	start:	printf("\nEnter month of birth\n");
		scanf("%d",&m);
		printf("\nEnter date of birth\n");
		scanf("%d",&d);
		while(f!=1){
	
		if((m==3&&d>=21&&d<=31)||((m==4)&&(d<=19)))
		{
			printf("\nARIES");
			printf("\nYou are not interested in being one of those comedians who wants to look good and be this 'cool' funny person. You don't care how weird or ugly you look.");
			f=1;
			exit(0);
		}
		
		else if((m==4&&d>=20&&d<=30)||((m==5)&&(d<=20)))
		{
			printf("\nTAURUS");
			printf("\nYou'll go on a world tour soon'");
			f=1;
			exit(0);
		}
		
		else if((m==5&&d>=21&&d<=31)||((m==6)&&(d<=20)))
		{
			printf("\nGEMINI");
			printf("\nYou will get married this yaer!!");
			f=1;
			exit(0);
		}
		
		else if((m==6&&d>=21&&d<=30)||((m==7)&&(d<=22)))
		{
			printf("\nCANCER");
			printf("\nYou'll become father/mother next year");
			f=1;
			exit(0);
		}
		
		else if((m==7&&d>=23)&&d<=31||((m==8)&&(d<=22)))
		{
			printf("\nLEO");
			printf("\nYour first love fails");
			f=1;
			exit(0);
		}
		
		else if((m==8&&d>=23&&d<=31)||((m==9)&&(d<=21)))
		{
			printf("\nVERGIO");
			printf("\nYou will not pass this years exam!!");
			f=1;
			exit(0);
		}
		
		else if((m==9&&d>=22&&d<=30)||((m==8)&&(d<=23)))
		{
			printf("\nLIBRA");
			printf("\nYou should not eat chocolate for 1 year!!");
			f=1;
			exit(0);
		}
		
		else if((m==10&&d>=24&&d<=31)||((m==11)&&(d<=21)))
		{
			printf("\nSCORPIO");
			printf("\nYou'll loose your memory powe in 2days");
			f=1;
			exit(0);
		}
		
		else if((m==11&&d>=22&&d<=30)||((m==12)&&(d<=21)))
		{
			printf("\nSIGITIARIUS");
			printf("\nYou will become jobless soon");
			f=1;
			exit(0);
		}
		
		else if((m==12&&d>=22&&d<=31)||((m==1)&&(d<=19)))
		{
			printf("\nCAPRICORN");
			printf("\nYou'll get a new job soon");
			f=1;
			exit(0);
		}
		
		else if((m==1&&d>=20&&d<=31)||((m==2)&&(d<=18)))
		{
			printf("\nAQUARIUS");
			printf("\nYou will go abroad insearch of the angel of your life");
			f=1;
			exit(0);
		}
		
		else if((m==2&&d>=19&&d<=29)||((m==3)&&(d<=20)))
		{
			printf("\nPISCES");
			printf("\nYour life's princess is searching for you!! ");
			f=1;
			exit(0);
		}
		
		else{
			printf("\nINVALID DATE OF BIRTH");
			printf("\nEnter a valid DATE OF BIRTH");
			f=0;
			goto start;
		}
		
	}
		
}
