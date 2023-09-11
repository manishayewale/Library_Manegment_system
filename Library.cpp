//#include"Book.h"
#include<iostream>
#include"Library.h"

using namespace std;
int Library::cnt=0;

    void Library::showCount()
	{
	   cout<<"\n Total no books are:"<<cnt;
     }
     
 Library::Library(int s)
     {
	  size=s;
	  index=-1;
	 bks=new Book[size];
	
     }

  Library::~Library()
    {
	  if(bks!=NULL)
	     {
		  delete []bks;
	     }
      cout<<"\n Library Destructor called:";
    }
    
 bool Library::isEmpty()
     {
 	   if(index==-1)
 	    {
 	    	return true;
	    }  
	  else
	    {
		   return false;
	    }
    }
    
  bool Library::isFull()
     {
 	     if(index==size-1)
 	     {
 		    return true;
	     }
	     else
	     {
		    return false;
	     }
     }
     
 void Library::addBook(Book &b)
     {
	    if(isFull())	
	      {
		     cout<<"\n Array is full , Cannot add more books";
	     }
     	else
	       {
		     bks[++index]=b;
		     cnt++;
        	} 
			cout<<"\n\n******************************************************************************************************************************************\n";   
     }

  void Library::displayBook()
    {
      int i;
	   if(isEmpty())	
	     {
	     	cout<<"\n No data to display....";
		     return;
	      }
	      else
	     {
	       cout<<"-----------------------------------------------------------------------------------------";
		   cout<<"\n Book id        Book name        Book author      Book publication       Book Price";
		   cout<<"\n--------------------------------------------------------------------------------------";

		  for(i=0;i<=index;i++)
		     {   
		    	bks[i].display();
		     }
	     }
	     cout<<"\n******************************************************************************************************************************************\n";
    }


 void Library::searchBook(int id)
{
   	int i,flag=0;
	if(isEmpty())	
	 {
		cout<<"\n No data to display....";
		return;
	 }

	else
	{
		for(i=0;i<=index;i++)
		{
			if(bks[i].getId()==id)
			{
				flag=1;
			cout<<"\n Book Found.....\n";
			cout<<"---------------------------------------------------------------------------------------------------------";
			cout<<"\n Book id            Book name           Book author          Book publication         Book Price";
			cout<<"\n--------------------------------------------------------------------------------------------------------";
			bks[i].display();
			}
		}	
	}
		if(flag==1)
		cout<<"\n Search Sucessfull.....\n";
		else
		cout<<"\n Book Not Present.....\n";
    cout<<"******************************************************************************************************************************************";   
}

void Library::updateBook(int id)
{
  int ch,flag;
  
  if(isEmpty())	
	  {
		cout<<"\n No data to display....";
		return;
      }
  else
    {
	  for(int i=0;i<=index;i++)
		{
		  if(bks[i].getId()==id)
			{
			 flag=1;
				cout<<"\n Enter which details you want to update: \n 1.Book Name \n 2.Book Author \n 3.Book Publication \n 4.Book Price\n";
				cout<<"\n Enter Your Choice:";
			    scanf("%d",&ch);
			    	
		     switch(ch)
				{
				 case 1:
					   {
						 char name[50];
						 cout<<"\n Enter New Book Name:";
						 fflush(stdin);
						 cin.getline(name,50);
						 bks[i].setName(name);	
						 break;
						} 
							
				 case 2:
						{
						 char author[50];
					 	 cout<<"\n Enter New Author's Name:";
						 fflush(stdin);
						 cin.getline(author,50);
						 bks[i].setAuthor(author);	
					 	break;
						}
			 	case 3:
						{
						 char publications[50];
						 cout<<"\n Enter New Publications's Name:";
					 	fflush(stdin);
					 	cin.getline(publications,50);
						 bks[i].setPublicn(publications);
					 	break;
						}
						
				 case 4:
						{
					     double price;
						 cout<<"\n Enter New Price for book:";
					 	cin>>price;
						 bks[i].setPrice(price);
						 break;
						}
			    }
		    }
	    }
	
	    if(flag==1)
		     cout<<"\n Upadte Sussessfull!!!";
	    else
		     cout<<"\n Book id Not Found";
    }
    cout<<"******************************************************************************************************************************************";
}

 void Library::deleteBook(int id)
 {
    if(isEmpty())
	     {
		 cout<<"\nNo Book to delete";
		  return;
	      }
	  else
	   {
		  int i;
		   for(i=0;i<=index;i++)
		     {
			    if(bks[i].getId() == id)
			     {
			    	break;
			     }
		      }
		      
		     if(i>index)
		         {  
			        cout<<"\nElement not found";			
		          }
		      else
		      
	        	{    
		       	  while(i<index)
			        {  
				       bks[i]=bks[i+1];
				        i++;
			         }
			         index--;
		         }
		     cout<<"\n Delete Sussessfull!!!";
		      cnt--;
	        }
	        cout<<"******************************************************************************************************************************************";
}
