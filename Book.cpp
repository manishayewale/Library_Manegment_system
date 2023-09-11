#include"Book.h"
#include<string.h>
#include<iostream>
using namespace std;
  Book::Book()
     {
     	this->bid=0;
	     strcpy(this->bname,"Not Given");
	     strcpy(this->author,"Not Given");
	     strcpy(this->publications,"Not Given");
	     this->price=00;
     }  
	   
     Book::~Book()
     {
	 //cout<<"\n BOOK Destructor....";
      }
      
     Book::Book(int i,const char* nm,const char*a,const char* p,double pr)
     {
	   this->bid=i;
	   strcpy(this->bname,nm);
	  strcpy(this->author,a);
	  strcpy(this->publications,p);
	  this->price=pr;
     }
      
     void Book::setId(int i)
      {
	  this->bid=i;

     }
	    
     void Book::setName(const char* nm)
     {
	 strcpy(this->bname,nm);
     }
      
     void Book::setAuthor(const char*a)
     {   
	 strcpy(this->author,a);
	  }
	  
     void Book::setPublicn(const char* p)
     {
	  strcpy(this->publications,p);

      }
      
     void Book::setPrice(double pr)
     {
	   this->price=pr;
     }    

     int Book::getId()
     {
	 return this->bid;
     }
     
     char* Book::getName()
     {
    	return this->bname;
     }
     
     char* Book::getAuthor()
     {
	   return this->author;
     }
     
     char* Book::getPublicn()
     {
	  return this->publications;
     }
      
     double Book::getPrice()
     {
	    return this->price;
     }
     
     void Book::display()
     {
	  cout<<"\n    "<<this->bid<<"           "<<this->bname<<"         "<<this->author<<"             "<<this->publications<<"            "<<this->price;
	  cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------";
     } 
//	cout<<"\n\n Book id          : "<<this->bid;
//	cout<<"\n Book name        : "<<this->bname;
//	cout<<"\n Book author      : "<<this->author;
//	cout<<"\n Book publication : "<<this->publications;
//	cout<<"\n Book Price       : "<<this->price;
//	cout<<"\n| Book id |     Book name      |   Book author   |  Book publication  |  Book Price  |";
//	cout<<"\n|     "<<this->bid<<"   |           "<<this->bname<<"      |   "<<this->author<<"   |  "<<this->publications<<"  |  "<<this->price<<"  |";
     



