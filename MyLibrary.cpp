#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	
	int i,n,j;	
	char bookName[n][30];		
	char authorName[n][30];
	int pages[n];
	float price[n];
	int keepcount=1;
	char arNm[30];
	
	
	while (j!=5){
		printf("\n\n");
		printf("1. Addbook information \n");
		printf("2. Display book information \n");
		printf("3. List all books of a given Author \n");
		
		printf("4. List the Count of books in the Library \n");
		printf("5. Exit \n");
	
		printf("\n\n Enter one of the above: ");
		scanf("%d",&j);
		
		
		switch(j){
			case 1:
				int n;
				printf("How many Entries do you have? ");
				scanf("%d",&n);
				
				
				for(i=0;i<=n;i++){
					printf("Enter book name: ");
					scanf("%s",bookName[i]);
					printf("Enter author name: ");
					scanf("%s", authorName[i]);
					printf("Enter number of pages: ");
					scanf("%d",&pages[i]);
					printf("Enter price: ");
					scanf("%f",&price[i]);
					printf("\n");
				}
				keepcount++;
				break;
				
				case 2:
					printf("***List of Books Available***\n\n");
					printf("\tS_N\t	Book_Name\tAuthor_Name\tPages\tPrices\n");
						
					for(i=0;i<=n;++i){
						printf("\t %d\t	%s\t	%s\t	%d\t%.2f\n", i+1,bookName[i],authorName[i],pages[i],price[i]);						
					}
					keepcount++;
					break;
					
					case 3:
						printf("List of Authors in the Library");
						printf("\n\tS_N \t Authors");
						for(i=1;i<=n;++i){
							printf("\n\t%d\t%s\n", i,authorName[i]);	
							}
							printf("Which of the Authors?");
							scanf("%s", arNm);
								if (strcmp(arNm,authorName[i])==0){
									printf("%s %s %d %f", bookName[i],authorName[i],pages[i],price[i]);
									} else{ printf("No Match");}
							
											
							
							
						
						
						keepcount++;
						break;
						
						case 4:
							printf("Book count in MyLibrary = %d", keepcount);
							break;
							
							case 5:
								exit(0);
			
		}
			
			
				
		
	}
		
	return 0;
}
