#include <iostream>
using namespace std;
int main()
{
				char a, b, c, d , ans ;
				int score = 0;
				int lifeline = 0;
			
				cout << " Welcome to quiz!" << endl;
				cout << "this quiz contains 10 questions each containing 10 marks." << endl;
				cout << "you only have 3 lifelines. " << endl;
				cout << "let's start!" ;
				cout << "\n \n \n" ;
				
				cout<<"\n \t \t";	
				cout<<" Q1 Total alphabets in english are :\n\t\t ";
				cout<<" a)26 ";
				cout<<" b)52 ";
				cout<<" c)100 ";
				cout<<" d)75 ";
				cin>>ans;
				
				if (ans == 'a' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<endl<<"lifeline used :"<<lifeline;
			    }
			    
			    cout<<"\n \t \t";	
				cout<<" Q2 whats the latest Iphone right now ?\n\t\t";
				cout<<" a) Iphone 15 ";
				cout<<" b) Iphone 11 ";
				cout<<" c) Iphone 12 ";
				cout<<" d) Iphone X ";
				cin>>ans;
				
				if (ans == 'a' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<endl<<"lifeline used :"<<lifeline;
			    }
			    
			    cout<<"\n \t \t";	
				cout<<" Q3 Karachi is the city of :\n\t \t";
				cout<<" a) Robbers";
				cout<<" b) Gangsters";
				cout<<" c) Lights";
				cout<<" d) Beauty ";
				cin>>ans;
				
				if (ans == 'c' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<endl<<"lifeline used :"<<lifeline;
			    }
			    
			    if (lifeline == 3)
			    cout<<endl<<"Game over all life line used!";
			    
			    else 
			    {
				
			    cout<<"\n \t \t";	
				cout<<" Q4 Whats the square of 2 ?\n\t \t";
				cout<<" a) 5";
				cout<<" b) 6";
				cout<<" c) 7";
				cout<<" d) 4 ";
				cin>>ans;
				
				if (ans == 'd' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				
				cout<<endl<<"lifeline used :"<<lifeline;
			    }
			    
			    if (lifeline == 3)
				cout<<endl<<"Game over all life line used!";
				else{
				
			    cout<<"\n \t \t";	
				cout<<" Q5 IBA is located in which city ?\n\t \t";
				cout<<" a) Larkana";
				cout<<" b) Dubai";
				cout<<" c) Islamabad";
				cout<<" d) None ";
				cin>>ans;
				
				if (ans == 'd' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<"lifeline used :"<<lifeline;
			    }
			    
			    if (lifeline == 3)
			    cout<<endl<<"Game over all life line used!";
			    else
			    {
			    	 cout<<"\n \t \t";	
				cout<<" Q6 Who is the PM of pskistan\n\t \t";
				cout<<" a) Anwar";
				cout<<" b) Asif Ali Zardari";
				cout<<" c) Bilawal Bhutto";
				cout<<" d) Imran khan ";
				cin>>ans;
				
				if (ans == 'a' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<"lifeline used :"<<lifeline;
			    }
			    
			    if (lifeline == 3)
			    cout<<endl<<"Game over all life line used!";
			    
			    else
			    {	
			     cout<<"\n \t \t";	
				cout<<" Q7 What is the loudest animal on Earth?\n\t \t";
				cout<<" a) The sperm whale";
				cout<<" b) Elephant";
				cout<<" c) lion";
				cout<<" d) Kangroo ";
				cin>>ans;
				
				if (ans == 'a' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<"lifeline used :"<<lifeline;
			    }
			    
			     if (lifeline == 3)
			    cout<<endl<<"Game over all life line used!";
			    
			    else
			    {
			    	cout<<"\n \t \t";	
				cout<<" Q8 Which country consumes the most chocolate per capita?\n\t \t";
				cout<<" a) Dubai";
				cout<<" b) Malaysia";
				cout<<" c) Switzerland";
				cout<<" d) None ";
				cin>>ans;
				
				if (ans == 'c' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<"lifeline used :"<<lifeline;
			    }
			    
			    if (lifeline == 3)
			    cout<<endl<<"Game over all life line used!";
			    
			    else
			    {
			    cout<<"\n \t \t";	
				cout<<" Q9  What is the tallest breed of dog in the world?\n\t \t";
				cout<<" a) German shapard";
				cout<<" b) Husky";
				cout<<" c) Bulldog";
				cout<<" d) Dane ";
				cin>>ans;
				
				if (ans == 'd' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<"lifeline used :"<<lifeline;
			    }
			    
			    if (lifeline == 3)
			    cout<<endl<<"Game over all life line used!";
			    else
			    {
			   	cout<<"\n \t \t";	
				cout<<" Q10 How many ribs are in a human body?\n\t \t";
				cout<<" a) 22";
				cout<<" b) 23";
				cout<<" c) 24";
				cout<<" d) 25 ";
				cin>>ans;
				
				if (ans == 'c' && lifeline != 3)
				score += 10;
				
				else
				{
				lifeline+=1;
				cout<<"lifeline used :"<<lifeline;
			    }
				
				}
				}
				}
				}
				}
				}
				}
			
				cout<<"\nTotal score "<<score;



return 0;
}

