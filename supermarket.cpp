#include <iostream>
using namespace std;

int main(){
    int c,d,qty4=0,e,qty1=0,f,qty2=0,qty3=0,g,price[4]={2500,1000,1500,4500},h,tprice1,tprice2,tprice3,tprice4;
    string a,b,y="y",p, arry[4]={"Toothpaste","shoe_polish","blueband","sugar"} ;
	cout<<"\t\t\tWelcome to UCUSupermarket!!\n\n";
	cout<<"------------------------------------------------------------------------------\n\n";
	cout<<"Enter name: ";
	cin>>a;
	cout<<"\n";
	cout<<"Enter contact: ";
	cin>>b;
	cout<<"\n";

    cout<<"Select item to purchase\n\n";
	cout<<"1."<<arry[0]<<"\n";
	cout<<"2."<<arry[1]<<"\n";
	cout<<"3."<<arry[2]<<"\n";
	cout<<"4."<<arry[3]<<"\n\n";
	cout<<"Enter number to make choice of item: ";
	cin>>c;
	
	if(c==1){
		if(qty1>0){
			cout<<"You already have "<<qty1<<" tubes of toothpaste, do you wish to add another? enter y to add another tube and n to cancel: ";
			cin>>p;
			
				if(p==y){
				cout<<"How many tubes do you want?: ";
				cin>>d;
				qty1 = qty1+d;
				tprice1=qty1*price[0];
			}
			
		}else{
		cout<<"How many tubes do you want?: ";
		cin>>d;
		qty1 = qty1+d;
		tprice1=qty1*price[0];
	}
	}else if(c==2){
			if(qty2>0){
			cout<<"You already have "<<qty2<<" tins of shoe_polish, do you wish to add another? enter y to add another tin and n to cancel: ";
			cin>>p;
			
				if(p==y){
				cout<<"How many tins do you want?: ";
				cin>>e,
				qty2 = qty2+e;
				tprice2=qty2*price[1];
			}
			
		}else{
		cout<<"How many tins do you want?: ";
		cin>>e,
		qty2 = qty2+e;
		tprice2=qty2*price[1];
	}
	
	}else if(c==3){
			if(qty3>0){
			cout<<"You already have "<<qty3<<" tins of blueband, do you wish to add another? enter y to add another tin and n to cancel: ";
			cin>>p;
			
				if(p==y){
				cout<<"How many tins do you want?: ";
				cin>>f;
				qty3 = qty3+f;
				tprice3=qty3*price[2];
			}
			
		}else{
		cout<<"How many tins do you want?: ";
		cin>>f;
		qty3 = qty3+f;
		tprice3=qty3*price[2];
	}
	
	}else if(c==4){
			if(qty4>0){
			cout<<"You already have "<<qty4<<" bags of sugar, do you wish to add another? enter y to add another bag and n to cancel: ";
			cin>>p;
			
				if(p==y){
				cout<<"How many bags of sugar do you want?: ";
				cin>>g;
				qty4 = qty4+g;
				tprice4=qty4*price[3];
			}
			
		}else{
		cout<<"How many bags of sugar do you want?: ";
		cin>>g;
		qty4 = qty4+g;
		tprice4=qty4*price[3];
	}
	
	}else{
		cout<<"Invalid Input";
	}
	cout<<"\n\n";
	cout<<"Do you want to purchase another item? enter 1 to purchase and 2 to end purchase: ";
	cin>>h;
	cout<<"\n\n";

    cout<<"\n\n";
	cout<<"------------------------------------------------------------------------------\n\n";
	cout<<"\t\t\tYour Reciept\n\n";
	cout<<"Customer name: "<<a<<"\n"<<"Customer contact: "<<b<<"\n\n";
	cout<<"------------------------------------------------------------------------------\n\n";
		while(qty1>0){
		
			cout<<arry[0]<<"\t\t"<<qty1<<"\t\t"<<tprice1<<"\n";
			break;
	}
	
		while(qty2>0){
		cout<<arry[1]<<"\t\t"<<qty2<<"\t\t"<<tprice2<<"\n";
		break;
	}
	
		while(qty3>0){
		cout<<arry[2]<<"\t\t"<<qty3<<"\t\t"<<tprice3<<"\n";
		break;
	}
	
		while(qty4>0){
		cout<<arry[3]<<"\t\t\t"<<qty4<<"\t\t"<<tprice4<<"\n";
		break;
	}
	cout<<"------------------------------------------------------------------------------";
	cout<<"\n\n";
	cout<<"\t\tThank you for choosing UCUSupermarket!\n\n";
	cout<<"------------------------------------------------------------------------------";
 return 0;

}