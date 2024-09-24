// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    BankCustomer(){
         this->name="";
        this->adharNumber="";
        this->panNumber="";
        this->emailId="";
        this->phoneNumber="";
    }
    BankCustomer(string nameArg, string adharNumberArg, string panNumberArg):BankCustomer(){
        this->name = nameArg;
        this->adharNumber = adharNumberArg;
        this->panNumber = panNumberArg;
        
        
    }
   BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg):BankCustomer(nameArg,adharNumberArg,panNumberArg){

        this->phoneNumber=phoneArg;
    }
  BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg,string emailIdArg):BankCustomer(nameArg,adharNumberArg,panNumberArg,phoneArg){

        this->emailId=emailIdArg;
        
    }
    
        void printInfo() {
            cout<<this->name<<endl;
            cout<<this->adharNumber<<endl;
            cout<<this->panNumber<<endl;
            cout<<this->emailId<<endl;
            cout<<this->phoneNumber<<endl;
            
        }
      
};

int main() {
    BankCustomer information("megha","89833e3","panNumber113","","gmail");
    information.printInfo();
     

     return 0;
}
