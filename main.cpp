#include <iostream>
#include <string>
using namespace std;
class Menu_card
{
public:
    string sub,item_qty,item_price,item_name, array1[42][3]{
{"1", "Chatni sandwich       ", "                     38"}, 
{"2", "plate sambar / Rasam", "                     33"}, 
{"3" "Pav bhaji                     ", "              100"}, 
{"4", "bhel puri                    ", "               55"}, 
{"5", "crispy fry aloo chaat ", "               75"}, 
{"6", "fruit salad                   ", "                70"}, 
{"7", "fruit jelly                    ", "              70"}, 
{"8", "jelly with ice cream  ", "                90"}, 
{"9", "kesar pista kulfi         ", "               73"}, 
{"10", "vanilla                      ", "                 80"}, 
{"11", "Gulab jamun            ", "                 50"}, 
{"12", "vanilla milkshake    ", "                  95"}, 
{"13", "chocolate milkshake", "                 95"}, 
{"14", "mosambi juice           ", "              100"}, 
{"15", "sweet lassi                  ", "               50"},
{"16","idli sambhar               ","                 56"},
{"17","medu vada                  ","                68"},
{"18","potato vada                 ","                   62"},
{"19","dahi vada                     ","               75"},
{"20","idli vada                       ","               62"},
{"21","paper dosa                   ","              180"},
{"22","rava dosa                     ","               72"},
{"23","potato chips                ","               60"},
{"24","upma                          ","                 55"},
{"25","puri bhaji                    ","                  68"},
{"26","peppery lemon soup   ","              130"},
{"27","dragon roll                 ","              150"},
{"28","Chinese bhel             ","                140"},
{"29","paneer Schezwan      ","               200"},
{"30","paneer chilly            ","               200"},
{"31","japanese noodles      ","                160"},
{"32","golden fried rice       ","               175"},
{"33","tomato soup              ","              85"},
{"34","palak soup               ","              105"},
{"35","paneer pakoda         ","               125"},
{"36","paneer tikka            ","               180"},
{"37","alu mutter               ","              190"},
{"38","alu jeera                   ","            160"},
{"39","alu palak                  ","            190"},
{"40","kaju curry                ","              230"},
{"41","tomato masala         ","            200"},
{"42","bhendi masala         ","           200"}

				  
				  };
    int i,k,m,l ,t, x, qty, rate, sum{0}, j, bill, num;
	


    void display_data();
	void instructions();
    void get_price();
    void get_sum();
	void make_bill();
    
	
	
};

void Menu_card::display_data()
{
    for (i = 0; i < 42; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
}

void Menu_card::instructions(){
	cout<<endl;
	cout<<endl;
	cout<<"_______________________________________________________________________________________________________________"<<endl;
    cout << "gst for our standalone restaurent is 5%" << endl;
	cout<<"_______________________________________________________________________________________________________________"<<endl;
    cout << "our delivery charges rates varies as follows" << endl;
    cout << "0 to 500 its 100" << endl;
    cout << "500 to 1000 its 75" << endl;
    cout << "1000 to 1500 its 1500" << endl;
    cout << "for orders exceeding 1500 our delivery services are absolutely free" << endl;
	cout<<"_______________________________________________________________________________________________________________"<<endl;
	cout<<endl;
	
}
void Menu_card::make_bill(){
	k=0;
	
	
		string array2[t][4]{};
	
			
			
			 for (k = 0; k < t; k++){
				 get_price();
				 array2[k][0]=item_name;
			    array2[k][1]=item_price;
			    array2[k][2]=item_qty;
			    array2[k][3]=sub;
				 
			
			 }
			 
			 cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"                                                       18 DEGREES NORTH                                                      "<<endl;
	cout<<"                                                   ('good food great vibes')                                                        "<<endl;
	cout<<"                                                11, East St, Camp, Pune  01                                                     "<<endl;
	cout<<"_______________________________________________________________________________________________________________"<<endl;
	cout<<"                                                    *****BILL No.26383***                                                            "<<endl;
	cout<<"                                                 ORDER ID#        :52388                                                          "<<endl;
	
	cout<<"ITEM NAME                           PRICE                QT                               SUB.TOTAL          "<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
			 for (k=0;k<t;k++){
		           for (l=0;l<4;l++){
			                  cout<<array2[k][l]<<"                 ";
		                 }
			cout<<endl;
		
	}
     cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
	 cout<<"RAW TOTAL                       "<<sum<<endl;
    sum = sum * 1.05;
	
	cout << " AMOUNT (inclusive of gst): " << sum << endl;
    if (sum <= 500)
    {
        cout << "your delivery charges amount to Rs 100 " << endl;
        bill = sum + 100;
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
        cout << "                                                                                                    TOTAL RS " << bill << " RUPEES" << endl;
    }
    else if (sum > 500 && sum <= 1000)
    {
        cout << "your delivery charges amount to Rs 75 " << endl;
        bill = sum + 75;
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
        cout << "                                                                                                    TOTAL RS " << bill << " RUPEES" << endl;
    }
    else if (sum > 1000 && sum <= 1500)
    {
        cout << "your delivery charges amount to Rs 50 " << endl;
        bill = sum + 50;
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
        cout << "                                                                                                    TOTAL RS " << bill << " RUPEES" << endl;
    }
    else
    {
        cout << "you are elligible for a free delivery for crossing the minimum order limit" << endl;
        bill = sum;
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
        cout << "                                                                                                    TOTAL RS " << bill << " RUPEES" << endl;
		
    }
	cout<<endl;
    cout << "                                                                           its been a pleasure serving you                                                    " << endl;
	cout<<"                                                              Technology Partner www.sherlock.com                                            "<<endl;
        
    
    
		
	
	
}

void Menu_card::get_price()
{

    cout << "enter sr.no of your item" << endl;
    cin >> x;
    i = x - 1;
	item_name=array1[i][1];
    cout << "enter number of " << item_name << " you wish to buy" << endl;
    cin >> qty;
	item_qty = to_string(qty);
    item_price = array1[i][2];
    num = stoi(item_price);
	rate = num * qty;
	sub = to_string(rate);
	
    cout << "your item costs  " << rate << endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    sum = sum + rate;
	
	
	
    
}

void Menu_card::get_sum()
{
    cout << "enter the number of items you wanna buy" << endl;
    cin >> t;
	make_bill ();
   
}





int main()
{
    Menu_card obj;
	obj.display_data();
	obj.instructions();
	obj.get_sum();
    

    return 0;
}