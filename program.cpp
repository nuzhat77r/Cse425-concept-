
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main () {

    ifstream ip("gsquarterly_december-2020-revised.csv");

  if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';

  string serial_no;
  string time_ref;
  string  account;
  string  code;
  string  country_code;
  string   product_type;
  string   value;
  string   status;

  string serial_noinput;
  string time_refinput;
  string  accountinput;
  string  codeinput;
  string  country_codeinput;
  string   product_typeinput;
  string   valueinput;
  string   statusinput;
  string choice;



    cout<<"Press 1 to search serial_no\n";
    cout<<"Press 2 to search time_ref\n";
    cout<<"Press 3 to search account\n";
    cout<<"Press 4 to search code\n";
    cout<<"Press 5 to search country_code\n";
    cout<<"Press 6 to search product_type\n";
    cout<<"Press 7 to search value\n";
    cout<<"Press 8 to search status\n";


    cin>> choice;
    //cout <<choice;

    if (choice == "1"){
     cout<<"Enter serial_no\n";
    cin>> serial_noinput;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (serial_noinput == serial_no)
        {
          std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";



        }
        }

  ip.close();
}


if (choice == "2"){
    cout<<"Enter time_ref\n";
    cin>> time_refinput;

while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (time_refinput == time_ref)
        {
std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";



        }
        }


  ip.close();
}

if (choice == "3"){

     cout<<"Enter account\n";
    cin>> accountinput;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (accountinput == account)
        {
 std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";



        }

        }


  ip.close();
}


if (choice == "4"){
    cout<<"Enter code\n";
    cin>> codeinput;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (codeinput == code)
        {


         std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";


        }
        }


  ip.close();

}
if (choice == "5"){
    cout<<"Enter country_code\n";
    cin>> country_codeinput;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (country_codeinput == country_code)
        {
            std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";


  }

  }
  ip.close();
}

if (choice == "6"){
    cout<<"Enter product_type\n";
    cin>> product_typeinput;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (product_typeinput == product_type)
        {
  std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";


        }

  }

  ip.close();
}
if (choice == "7"){
    cout<<"Enter value\n";
    cin>> valueinput;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (valueinput == value)

        {
       std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";

        }
  }
  ip.close();
  }
if (choice == "8"){
    cout<<"Enter status\n";
    cin>> statusinput;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip, code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (statusinput == status)
        {
        std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<< " " <<country_code<<" "<<product_type<< " " <<value<< " " <<status<< "\n";

    }
  }

ip.close();

}


  }



