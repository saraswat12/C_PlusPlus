#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;

    int Qrooms=0, Qpastas=0, Qburgers=0, Qnoodles=0, Qshakes=0, Qchickens=0;
    //Qroom and pastas and all hold the values of the quatity which the hotel have//
    
    int Srooms=0, Spastas=0,  Sburgers=0, Snoodles=0, Sshakes=0, Schickens=0;
     //spastas and all (s) holdes the value which of the items that have been sold//
   
    int totalcost_rooms=0, totalcost_pasta=0, totalcost_burger=0, totalcost_noodles=0, totalcost_shake=0, totalcost_chicken=0;
    //this tells the total price of the items//

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pastas:";
    cin>>Qpastas;
    cout<<"\n Quantity of Burgers:";
    cin>>Qburgers;
    cout<<"\n Quantity of Noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shake:";
    cin>>Qshakes;
    cout<<"\n Quantity of Chicken:";
    cin>>Qchickens;
    

    while(1){
    cout<<"\n\t\t\t Please select from the menu options :";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burgers";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake ";
    cout<<"\n 6) Chicken";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";
    cout<<"\n Please enter your choice";
    cin>>choice;

     switch(choice){
        case 1:
            cout<<"\n enter the number of rooms you want";
            cin>>quant;
            if(Qrooms-Srooms >= quant){
                Srooms=Srooms+quant;
                totalcost_rooms=totalcost_rooms+(quant*1200);
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
            }
            else{
                cout<<"\n\t Only"<<Qrooms-Srooms<<"rooms remaining in hotel";
                break;
            }

            case 2:
            cout<<"\n enter the Pasta quantity you want";
            cin>>quant;
            if(Qpastas-Spastas >= quant){
                Spastas=Spastas+quant;
                totalcost_pasta=totalcost_pasta+(quant*200);
                cout<<"\n\n\t\t"<<quant<<"pasta is ordered";
            }
            else{
                cout<<"\n\t Only"<<Qpastas-Spastas<<"pasta remaining in hotel";
                break;
            }

            case 3:
            cout<<"\n enter the Burgers quantity you want";
            cin>>quant;
            if(Qburgers-Sburgers >= quant){
                Sburgers=Sburgers+quant;
                totalcost_burger=totalcost_burger+(quant*100);
                cout<<"\n\n\t\t"<<quant<<"burger is ordered";
            }
            else{
                cout<<"\n\t Only"<<Qburgers-Sburgers<<"burger remaining in hotel";
                break;
            }

            case 4:
            cout<<"\n enter the Noodles quantity you want";
            cin>>quant;
            if(Qnoodles-Snoodles >= quant){
                Snoodles=Snoodles+quant;
                totalcost_noodles=totalcost_noodles+(quant*150);
                cout<<"\n\n\t\t"<<quant<<"Noodles is ordered";
            }
            else{
                cout<<"\n\t Only"<<Qnoodles-Snoodles<<"Noodles remaining in hotel";
                break;
            }

            case 5:
            cout<<"\n enter the shake quantity you want";
            cin>>quant;
            if(Qshakes-Sshakes >= quant){
                Sshakes=Sshakes+quant;
                totalcost_shake=totalcost_shake+(quant*50);
                cout<<"\n\n\t\t"<<quant<<"shake is ordered";
            }
            else{
                cout<<"\n\t Only"<<Qshakes-Sshakes<<"shakes remaining in hotel";
                break;
            }

            case 6:
            cout<<"\n enter the  quantity of chicken you want";
            cin>>quant;
            if(Qchickens-Schickens >= quant){
                Schickens=Schickens+quant;
                totalcost_chicken=totalcost_chicken+(quant*250);
                cout<<"\n\n\t\t"<<quant<<"chicken is ordered";
            }
            else{
                cout<<"\n\t Only"<<Qchickens-Schickens<<"Chickens remaining in hotel";
                break;
            }

            case 7:
                cout<<"\n\t\t Details of sales and collection: ";
                cout<<"\n\n Number of rooms we had:"<<Qrooms;
                cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
                cout<<"\n\n remaining rooms "<<Qrooms-Srooms;
                cout<<"\n\n Total rooms collection for the day:"<<totalcost_rooms;

                
                cout<<"\n\n Number of pastas we had:"<<Qpastas;
                cout<<"\n\n Number of pastas we sold  "<<Spastas;
                cout<<"\n\n remaining pastas "<<Qpastas-Spastas;
                cout<<"\n\n Total pastas collection for the day:"<<totalcost_pasta;

                 
                cout<<"\n\n Number of burgers we had:"<<Qburgers;
                cout<<"\n\n Number of burgers we sold "<<Sburgers;
                cout<<"\n\n remaining burgers "<<Qburgers-Sburgers;
                cout<<"\n\n Total burgers collection for the day:"<<totalcost_burger;

                 
                cout<<"\n\n Number of noodles we had:"<<Qnoodles;
                cout<<"\n\n Number of noodles we sold "<<Snoodles;
                cout<<"\n\n remaining noodles "<<Qnoodles-Snoodles;
                cout<<"\n\n Total noodles collection for the day:"<<totalcost_noodles;

                 
                cout<<"\n\n Number of shake we had:"<<Qshakes;
                cout<<"\n\n Number of shake we sold "<<Sshakes;
                cout<<"\n\n remaining shakes "<<Qshakes-Sshakes;
                cout<<"\n\n Total shake collection for the day:"<<totalcost_shake;

                cout<<"\n\n Number of chicken we had:"<<Qchickens;
                cout<<"\n\n Number of chicken we sold "<<Schickens;
                cout<<"\n\n remaining chicken "<<Qchickens-Schickens;
                cout<<"\n\n Total chicken collection for the day:"<<totalcost_chicken;


                cout<<"\n\n Total collection for the day:"<<totalcost_rooms+totalcost_burger+totalcost_chicken+totalcost_noodles+totalcost_pasta+totalcost_shake;

            case 8:
                exit(0);

                default:
                    cout<<"\n Please select the numbers mentioned above:";
            
     } 
    }
     
     
}