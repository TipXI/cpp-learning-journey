#include <iostream>
using namespace std;

void res_bill ();
void bus_bill ();
main ()
{
	int account;
	char type;
//	float res_bill_processing_fee= 4.50, res_basic_service_coast= 20.50, res_premium_channel_coast= 7.50;
//	float bus_bill_processing_fee= 15.00, bus_basic_service_coast= 75.00, bus_basic_connection_coast= 5.00,bus_premium_channel_coast= 50.00, additional_fee= 5.00;
    cout<< "Enter your account number "<< endl;
    cin>> account;
    cout<< "Enter customer type :r for residential / b for business "<< endl;
    cin>> type;
    if (type=='r' || type=='R')
		res_bill();
    else if (type=='b' || type=='b')
		bus_bill();
    else
	    cout<< "Error";	

    return 0;
}

void res_bill ()
{
	float bill,res_bill_processing_fee= 4.50, res_basic_service_coast= 20.50, res_premium_channel_coast= 7.50;
	int res_premium_channel;
	cout<< "Enter number of premium channel "<< endl;
    cin>> res_premium_channel;
	bill= res_bill_processing_fee+ res_basic_service_coast+(res_premium_channel_coast*res_premium_channel);
	cout<< "The bill is "<< bill<< endl;
}

void bus_bill ()
{
	float bill,bus_bill_processing_fee= 15.00, bus_basic_service_coast= 75.00, bus_basic_connection_coast= 5.00,bus_premium_channel_coast= 50.00, additional_fee= 5.00;
	int bus_basic_servise, bus_premoum_channel;
	cout<< "Enter number of basic channel "<< endl;
    cin>> bus_basic_servise;
    cout<< "Enter number of premium channel "<< endl;
    cin>> bus_premoum_channel;
    if (bus_basic_servise<= 10)
    {
        bill= bus_bill_processing_fee+ bus_basic_service_coast+bus_basic_connection_coast+(bus_premium_channel_coast*bus_premoum_channel);
        cout<< "The bill is "<< bill<< endl;
    }
    else 
    {
        bill= bus_bill_processing_fee+ bus_basic_service_coast+(bus_basic_connection_coast*(bus_basic_servise-10))+(bus_premium_channel_coast*bus_premoum_channel);
        cout<< "The bill is "<< bill<< endl;
    }
}

