class Book
{
	
	int bid;
	char bname[50];
	char author[50];
	char publications[50];
	double price;
	public:
	     Book();
		 Book(int,const char*,const char*,const char*,double);
		 ~Book();
		void setId(int i);
		void setName(const char*);
		void setAuthor(const char*);
		void setPublicn(const char*);
		void setPrice(double i);
		
		int getId();
		char* getName();
		char* getAuthor();
		char*  getPublicn();
		double getPrice();
		void display();
};
