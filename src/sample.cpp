#include <iostream>
using namespace std;

class Check
{
  private:
    int i;
  public:
    Check(): i(0) {  }
    Check operator ++ ()
    {
        Check temp;
        temp.i = ++i;
        return temp;
    }

    // Notice int inside barcket which indicates postfix increment.
    Check operator ++ (int)
    {
        Check temp;
        temp.i = i++;
        return temp;
    }

    void Display()
    { cout << "i = "<< i <<endl; }
};

int main()
{
    Check obj, obj1;    
    obj.Display(); 
    obj1.Display();

    // Operator function is called, only then value of obj is assigned to obj1
    obj1 = ++obj;
    obj.Display();
    obj1.Display();

    // Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj++;
    obj.Display();
    obj1.Display();

    return 0;
}
	
	/* float a[5];
	cout<<"Enter 5 numbers: "<<endl;
	for(int i=0; i<5; i++)
		//cin>>a[i];
		cin>>*(a+i);
	cout<<"Displaying data using pointer notation: "<<endl;
	for(int i=0; i<5; i++)
		//cout<<a[i]<<" ";
		cout<<*(a+i)<<" "; */
	
	/*	int v1=100;
        int v2=200;
        int v3=300;
        cout<<"The address of v1="<<&v1<<", v2="<<&v2<<", v3="<<&v3<<endl;
        //Display prime numbers between two numbers
        bool flag;
        int n1, n2;
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
        cout<<"The prime numbers between " <<n1<< " and "<<n2<<" are: "<<endl;
        for(int i=n1; i<n2; i++){
                flag=checkPrimenums(i);
                if(flag)
                        cout<<i<<" ";
        }
        cout<<endl;
        return 0;
}

int checkPrimenums(int n)
{
        bool flag = true;
        for(int i=2; i<=n/2; i++){
                if(n%i == 0){
                        flag=false;
                        break;
                }
        }
        return flag;
}


	//Fibonacci series
	/* int n, n1=0, n2=1, n3;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Fibonacci series:\n";
	cout<<n1<<" " <<n2;
	n3=n1+n2;
	while(n3<=n){
		cout<<" "<<n3;
		n1=n2;
		n2=n3;
		n3=n1+n2;
	} */
	/* for(int i=3; i<=n; i++){
		n3=n1+n2;
		cout<<" "<<n3;
		n1=n2;
		n2=n3;
	} */	
	
	/* int n,fact=1;
	cout<<"Enter a number: " <<endl;
	cin>>n;
	for(int i=1; i<=5; i++){
		fact = fact*1;
	}
	cout<<"The factorial of " << n <<" is " <<fact; */
	
	/* int n;
	cout<<"Enter any number: \n";
	cin>>n;
	if(n > 0)
			cout<<n << " is Positive number."<<endl;
	else
			cout<<n<<" is Negative number." <<endl;
	return 0;
	*/
	