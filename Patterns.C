#include<stdio.h>
#include<conio.h>

void main(){

	clrscr();
	int i,j,Line,S,Switch,M;
	int Choice=15;
	M=Line;

	printf("Enter No. Of Lines In Pattern: ");
	scanf("%d",&Line);

	printf("1. Pyramid \t");
	printf("2. Half Pyramid\t");
	printf("3. Ulta Half Pyramid\n");
	printf("4. Half Pyramid With Numbers\t");
	printf("5. FULL Pyramid With Numbers\n");
	printf("6. ULta Half Pyramid With Numbers\t");
	printf("7. Hollow Square\t");
	printf("8. Hollow Star\t");
	printf("9. Hollow Sqaure Star\n");
	printf("10. Rhombus Star\t");
	printf("11. Mirrored Rhombus Star\t");
	printf("12. Hollow Rhombus Star\n");
	printf("13. Hollow Mirror Rhombus Star\t");
	printf("14. Hollow Pyramid Star\n");
	printf("15. X Star Pattern\n\n");

	printf("Enter Your Choice: ");
	scanf("%d",&Choice);

	switch(Choice)
	{
	    case 1:

		for(i=1;i<=Line;i++)
		{
			for(j=1;j<=Line-i;j++)
			{

				printf(" ");

			}
			for(S=0;S!=2*i-1;++S)
				{

				     printf("*");

				}
			printf("\n");

		}
		break;


				//Half Peramid

		case 2:
		for(i=1;i<=Line;i++)
		{
			for(j=1;j<=i;j++)
			{

			      printf("*");

			}
		    printf("\n");
		}
		 break;
			      //Ulta Half Piramid

		case 3:
		for(i=1;i<=Line;i++)
		 {
			for(j=Line;j>=i;j--)
			{

			      printf("*");

			}
		    printf("\n");
		 }
		 break;
				   //Half peramid With numbers

		 case 4:
		for(i=1;i<=Line;i++)
		{
			for(j=1;j<=i;j++)
			{

			      printf("%d",j);

			}
		    printf("\n");
		}
		break;
				//Full peramid With Numbers
		case 5:

		for(i=1;i<=Line;i++)
		{
			for(j=1;j<=Line-i;j++)
			{

				printf(" ");

			}
			for(S=0;S!=2*i-1;++S)
				{

				     printf("%d",S);

				}
			printf("\n");

		}
		break;
			      //Ulta Half Piramid with Numbers

		case 6:
		for(i=1;i<=Line;i++)
		 {
			for(j=Line;j>=i;j--)
			{

			      printf("%d",j);

			}
		    printf("\n");
		 }
		 break;
				  //Hollow Squre Pattern
		 case 7:
		 for(i=1;i<=Line;i++)
		 {
			for(j=1;j<=Line;j++)
			{
				if(i==1||i==Line||j==1||j==Line-i+1||i==j||j==Line)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		 }
		 break;
				//Hollow Star Pattern
		 case 8:
		 for(i=0;i<Line;i++)
		 {
			for(j=0;j<Line;j++)
			{
				printf("*");
			}
		   printf("\n");
		 }
		 break;
				//Hollow Squre Star Pattern
		  case 9:
		  for(i=1;i<=Line;i++)
		 {
			for(j=1;j<=Line;j++)
			{
				if(i==1||j==1||i==Line||j==Line)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		 }
		 break;

				 //Rhombus Star Pattern
		case 10:
		for(i=Line;i>=1;i--)
		{
			for(j=1;j<=i-1;j++)
			{
				printf(" ");

			}
				for(int K=1;K<=Line;K++)
				{
					printf("*");
				}
			printf("\n");
		}
		break;
				//Mirrored Rhombus Star Pattern
		case 11:
		for(i=1;i<=Line;i++)
		{
			for(j=1;j<i;j++)
			{
				printf(" ");

			}
				for(int K=1;K<=Line;K++)
				{
					printf("*");
				}
			printf("\n");
		}
		break;
				//Hollow Rhombus Star Pattern
		case 12:
		for(i=Line;i>=1;i--)
		{
			for(j=1;j<=i-1;j++)
			{
				printf(" ");

			}
				for(int K=1;K<=Line;K++)
				{
					if(i==1||i==Line||K==1||K==Line)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
			printf("\n");
		}
		break;
				    // Hollow Mirror Rhombus Star Pattern\n
		case 13:
		for(i=1;i<=Line;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" ");

			}
				for(int K=1;K<=Line;K++)
				{
					if(i==1||i==Line||K==1||K==Line)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
			printf("\n");
		}
		break;
				   // Hollow Pyramid Star
		case 14:

			for(i=1;i<=Line;i++)
			{
				for(j=1;j<=M-1;j++)
				{
				  printf(" ");
				}
					for(int K=1;K<=2*i-1;K++)
					{
						if(K==1||K==2*i-1||i==Line)
						  {
						  printf("*");
						  }
						else
						  {
						  printf(" ");
						  }
					 }
					     M--;
					  printf("\n");


			}
		 break;

					//X Star Pattern
		case 15:
		M=2*Line-1;
		for(i=1;i<=M;i++)
		{
			for(j=1;j<=M;j++)
			{
				if(i==j||j==(M-i+1))
				{
				 printf("*");
				}
				else
				{
				 printf(" ");
				}
			}
			printf("\n");
	      }
	      break;
		default:
		printf("Enter Valid Choice");
		break;

	   }
 getch();
}
