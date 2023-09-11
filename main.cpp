#include <iostream>
#include <string.h>
#include <stdio.h>

#include"Library.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
 int ch,size;
 cout<<"\n How many Books you want to enter:";
 cin>>size;
 Library L(size);
	 
    do
    {
	    cout<<"\n\n 1). Add Book Details \n 2). Display Book Details\n 3). Search Book Details\n 4). Update Book Details \n 5). Delete Book Details \n 6). Total Books \n 7). End";
	    cout<<"\n\n Enter Your choice:";
	    cin>>ch;
	     
       switch(ch)
	    {
		   case 1:
		    {
		       for(int i=0;i<2;i++)
			    {
		         int id;
		         char name[50];
		         char aut[50];
		         char pb[50];
		         double pr;
		        
		         cout<<"\n Enter book id          : ";
		         cin>>id;
		      
		         cout<<"\n Enter book Name        : ";
		         fflush(stdin);
		         cin.getline(name,50);
		      
		         cout<<"\n Enter book author      : ";
		         fflush(stdin);
		         cin.getline(aut,50);
		     
		         cout<<"\n Enter book publication : ";
		         fflush(stdin);
		         cin.getline(pb,50);
		     
		         cout<<"\n Enter book price       : ";
		         cin>>pr;
		         Book bk(id,name,aut,pb,pr);
		         L.addBook(bk);
		        
		        }
		       
		    	break;
		     }
		    	
		    
		    	
		    case 2:
			     {
			      L.displayBook();
			      break;
		          }
		        
		     case 3:
			  {
                int id;
			    cout<<"\n Enter Book ID to search:";
			    cin>>id;
			    L.searchBook(id);
			   break;
		     }
		     
		     case 4:
			 {
		     	int id;
		     	cout<<"\n Enter Book ID to update it's details:";
			    cin>>id;
			     L.updateBook(id);
			     break;
		     }
		     
		     case 5:
			 {
		     	int id;
			    cout<<"\n Enter Book ID to delete:";
		     	cin>>id;
		    	L.deleteBook(id);
		     	break;
		      }
		      
		     case 6:
			 {
		    	L.showCount();
		    	break;
		     }
		     
		     case 7:
			   {
			     cout<<"\n End...";
			    break;
		     }
		      default:
			     cout<<"\n Enter Valid choice!!!!";
			    break;
	        }
	 
         }  while(ch!=7);
    	return 0;
}


