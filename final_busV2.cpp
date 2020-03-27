#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
    int buses_available()
    {
        int bus_no;
            cout<<"bus no: 10 MUMBAI TO AHMEDABAD"<<endl;
            cout<<"bus no: 11 MUMBAI TO INDORE"<<endl;
            cout<<"bus no: 12 MUMBAI TO BANGLORE"<<endl;
            cout<<"bus no: 13 MUMBAI TO NAGPUR"<<endl;
            cout<<"enter the bus no for information"<<endl;
            cin>>bus_no;

        switch(bus_no)
        {

        case 10:
                cout<<"**********************************************"<<endl;
                    cout<<"driver name: Tarun "<<endl;
                    cout<<"departure time from Mumbai: 10.30 pm "<<endl;
                    cout<<"Approximate time till Ahmedabad: 10.30 hrs "<<endl;
                    cout<<"Stops: Vapi , Surat , Vadodara "<<endl;
                    cout<<"Available on: MO TU WE FR SA "<<endl;
                    cout<<"FROM : Mumbai "<<endl;
                    cout<<"TO : Ahemdabad "<<endl;
                cout<<"**********************************************"<<endl;
                cout<<endl;
                break;

        case 11:
                cout<<"**********************************************"<<endl;
                    cout<<"driver name: Aman "<<endl;
                    cout<<"departure time : 12.30 am "<<endl;
                    cout<<"Approximate time till Indore: 12.00 hrs "<<endl;
                    cout<<"Stops: Nashik , Shirpur , Manpur "<<endl;
                    cout<<"Available on: MO TU TH SA "<<endl;
                    cout<<"FROM : Mumbai "<<endl;
                    cout<<"TO : Indore "<<endl;
                cout<<"**********************************************"<<endl;
                cout<<endl;
                break;

        case 12:
                cout<<"**********************************************"<<endl;
                    cout<<"driver name: Jash"<<endl;
                    cout<<"arrival time at Banglore : 10:00 pm "<<endl;
                    cout<<"Approximate time till Banglore: 20 hrs "<<endl;
                    cout<<"Stops: Pune , Kolhapur , Davanagere "<<endl;
                    cout<<"Available on: MO WE FR "<<endl;
                    cout<<"FROM : Mumbai "<<endl;
                    cout<<"TO : Banglore"<<endl;
                cout<<"***********************************************"<<endl;
                cout<<endl;
                break;

        case 13:
                cout<<"***********************************************"<<endl;
                    cout<<"driver name: mithill "<<endl;
                    cout<<"arrival time at Nagpur : 7:00 pm "<<endl;
                    cout<<"Approximate time till Nagpur: 16.00 hrs "<<endl;
                    cout<<"Stops: Igatpuri , Aurangabad , Karanja"<<endl;
                    cout<<"MO TU WE TH FR SA SU"<<endl;
                    cout<<"FROM : Mumbai "<<endl;
                    cout<<"TO : Nagpur "<<endl;
                cout<<"***********************************************"<<endl;
                cout<<endl;
                break;
        }
        return 0;
    }
    int checktickets(int s[18],int se[18],int sea[18],int seat[18])
    {
            int bus_no;
            int place;

            cout<<"bus no: 10 MUMBAI TO AHMEDABAD"<<endl;

            cout<<"bus no: 11 MUMBAI TO INDORE"<<endl;

            cout<<"bus no: 12 MUMBAI TO BANGLORE"<<endl;

            cout<<"bus no: 13 MUMBAI TO NAGPUR"<<endl;

            cout<<"enter the bus no for checking available tickets"<<endl;
            cin>>bus_no;
                    string b="booked";
                    string e="empty";
                    string disp;
                    int x;

        switch(bus_no)
        {

                case 10:
                    for(int i=0;i<18;i++)
                    {
                     if(s[i]==0)
                    {
                          disp=e;

                          cout<<i<<". "<<disp<<endl;

                          cout<<endl;
                    }
                    else if(s[i]==1)
                    {
                          disp=b;

                          cout<<i<<". "<<disp<<endl;

                          cout<<endl;
                    }
                    }
                    break;

                    case 11:
                        for(int i=0;i<18;i++)
                            {
                             if(se[i]==0)
                            {
                                  disp=e;

                                  cout<<i<<". "<<disp<<endl;

                                  cout<<endl;
                            }
                            else if(se[i]==1)
                            {
                                  disp=b;

                                  cout<<i<<". "<<disp<<endl;

                                  cout<<endl;
                            }
                            }
                            break;

                    case 12:
                        for(int i=0;i<18;i++)
                            {
                             if(sea[i]==0)
                            {
                                  disp=e;

                                  cout<<i<<". "<<disp<<endl;

                                  cout<<endl;
                            }
                            else if(sea[i]==1)
                            {
                                  disp=b;

                                  cout<<i<<". "<<disp<<endl;

                                  cout<<endl;
                            }
                            }
                            break;

                        case 13:
                            for(int i=0;i<18;i++)
                                {
                                 if(seat[i]==0)
                                {
                                      disp=e;

                                      cout<<i<<". "<<disp<<endl;

                                      cout<<endl;
                                }
                                else if(seat[i]==1)
                                {
                                      disp=b;

                                      cout<<i<<". "<<disp<<endl;

                                      cout<<endl;
                                }
                                }
                                break;
                    }
                }
    int reservation(int s[18],int se[18],int sea[18],int seat[18])
    {
        int bus_no;
        int seats;

        int place;
        int p,q,r,so;

        int dis,cost=0;
        double time;

        string p1,q1,r1,so1;

        cout<<"bus no: 10 MUMBAI TO AHMEDABAD"<<endl;

        cout<<"bus no: 11 MUMBAI TO INDORE"<<endl;

        cout<<"bus no: 12 MUMBAI TO BANGLORE"<<endl;

        cout<<"bus no: 13 MUMBAI TO NAGPUR"<<endl;

        cout<<"enter the bus no for booking tickets"<<endl;
        cin>>bus_no;


        switch(bus_no)
        {

            case 10:
            cout<<"bus no: 10 MUMBAI TO AHMEDABAD"<<endl;

            cout<<"1. Vapi"<<endl;

            cout<<"2. Surat"<<endl;

            cout<<"3. Vadodra"<<endl;

            cout<<"4. Ahmedabad"<<endl;

            cout<<"enter your destination no."<<endl;
            cin>>place;

        switch(place)
        {

         case 1:
          dis=176;
          time=3.30;
          break;

         case 2:
          dis=290;
          time=5.50;
          break;

        case 3:
          dis=418;
          time=7.10;
          break;

        case 4:
        dis=531;
        time=8.20;
        break;

      default:
       cout<<"Invalid Choice"<<endl;

     }
        cout<<"enter the seat to be booked"<<endl;
        cout<<"(0-17 seats)"<<endl;
        cin>>seats;
        cout<<"enter your name"<<endl;
        cin>>p1;
        p=0;

     for(int i=0;i<18;i++)
        {

        if(s[i]==0&&i==seats)
        {
            s[i]=1;

            cout<<"Done"<<endl;

            cout<<endl;

            p=1;
             cost=5*dis;

        cout<<"Cost : "<<cost<<endl;

        cout<<"Approx time : "<<time<<"hrs "<<endl;
        break;
        }
        }

        if(seats>18)
        {
            cout<<"only 18 seats available"<<endl;

            cout<<endl;
        }

        if(p==0)
        {
           cout<<"the seat is already booked "<<endl;

           cout<<endl;
        }


        break;

        case 11:
                cout<<"bus no: 11 MUMBAI TO INDORE"<<endl;

                cout<<"1. Nashik"<<endl;

                cout<<"2. Shirpur"<<endl;

                cout<<"3. Manpur"<<endl;

                cout<<"4. Indore"<<endl;

                cout<<"enter your destination no."<<endl;
                cin>>place;
            switch(place)
            {

             case 1:
              dis=167;
              time=3.30;
              break;

             case 2:
              dis=378;
              time=6.50;
              break;

             case 3:
              dis=461;
              time=9.40;
              break;

            case 4:
            dis=584;
            time=10.20;
            break;

          default:
           cout<<"Invalid Choice"<<endl;

         }
            cout<<"enter the seat to be booked"<<endl;
            cout<<"(0-17 seats)"<<endl;
            cin>>seats;
            cout<<"enter your name"<<endl;
            cin>>q1;
            q=0;

            for(int i=0;i<18;i++)
            {
            if(se[i]==0&&i==seats)
            {
                se[i]=1;

                cout<<"Done"<<endl;

                cout<<endl;

                q=1;
                  cost=5*dis;

            cout<<"Cost : "<<cost<<endl;

            cout<<"Approx time : "<<time<<"hrs "<<endl;
            break;
            }
            }
            if(seats>18)
            {
                cout<<"only 18 seats available"<<endl;

                cout<<endl;
            }
            if(q==0)
            {
               cout<<"the seat is already booked "<<endl;

               cout<<endl;
            }


            break;

            case 12:
                    cout<<"bus no: 12 MUMBAI TO BANGLORE"<<endl;

                    cout<<"1. Pune"<<endl;

                    cout<<"2. Kholapur "<<endl;

                    cout<<"3. Davanagere"<<endl;

                    cout<<"4. Banglore"<<endl;

                    cout<<"enter your destination no."<<endl;
                    cin>>place;
            switch(place)
            {

             case 1:
              dis=149;
              time=2.50;
              break;

             case 2:
              dis=376;
              time=6.30;
              break;

            case 3:
              dis=723;
              time=11.20;
           break;

            case 4:
            dis=984;
            time=15.20;
            break;

          default:
           cout<<"Invalid Choice"<<endl;

         }
         cout<<"enter the seat to be booked"<<endl;
         cout<<"(0-17 seats)"<<endl;
            cin>>seats;
        cout<<"enter your name"<<endl;
        cin>>r1;
            r=0;
            for(int i=0;i<18;i++)
            {

            if(sea[i]==0&&i==seats)
            {
                sea[i]=1;

                cout<<"Done"<<endl;

                cout<<endl;

                r=1;
                cost=5*dis;

            cout<<"Cost : "<<cost<<endl;

            cout<<"Approx time : "<<time<<"hrs "<<endl;
            break;
            }
            }
            if(seats>18)
            {
                cout<<"only 18 seats available"<<endl;

                cout<<endl;
            }
            if(r==0)
            {
               cout<<"the seat is already booked "<<endl;

               cout<<endl;
            }


            break;

            case 13:
                cout<<"bus no: 13 MUMBAI TO NAGPUR"<<endl;

                cout<<"1. Igatpuri"<<endl;

                cout<<"2. Aurangabad "<<endl;

                cout<<"3. Karanja"<<endl;

                cout<<"4. Nagpur"<<endl;

                cout<<"enter your destination no."<<endl;
                cin>>place;
            switch(place)
            {

             case 1:
              dis=121;
              time=2.30;
              break;

             case 2:
              dis=335;
              time=6.50;
              break;

             case 3:
              dis=593;
              time=11.50;
             break;

            case 4:
            dis=812;
            time=15.00;
            break;

            case 5:
            break;

          default:
           cout<<"Invalid Choice"<<endl;
         }
            cout<<"enter the seat to be booked"<<endl;
            cout<<"(0-17 seats)"<<endl;
            cin>>seats;
            cout<<"enter your name"<<endl;
        cin>>so1;
            s=0;

            for(int i=0;i<18;i++)
            {
            if(seat[i]==0&&i==seats)
            {
                seat[i]=1;

                cout<<"Done"<<endl;

                cout<<endl;

                so=1;
                 cost=5*dis;

            cout<<"Cost : "<<cost<<endl;

            cout<<"Approx time : "<<time<<"hrs "<<endl;

            break;
            }
            }
            if(seats>18)
            {
                cout<<"only 18 seats available"<<endl;

                cout<<endl;
            }
            if(so==0)
            {
               cout<<"the seat is already booked "<<endl;

               cout<<endl;
            }


            }
        }
        int cancellation(int s[18],int se[18],int sea[18],int seat[18])
        {
            int l,m,n,o;
            int checks,bus_no;
            cout<<endl;
                cout<<"bus no: 10 MUMBAI TO AHMEDABAD"<<endl;

                cout<<"bus no: 11 MUMBAI TO INDORE"<<endl;

                cout<<"bus no: 12 MUMBAI TO BANGLORE"<<endl;

                cout<<"bus no: 13 MUMBAI TO NAGPUR"<<endl;

                cout<<"enter the bus number you booked :";
                cin>>bus_no;

                cout<<"enter your seat number :";
                cin>>checks;

                cout<<endl;
            switch(bus_no)
            {

            case 10:
                for(int i=0;i<18;i++)
                {
                    l=0;
                    if(checks==i && s[checks]==1)
                    {
                        s[i]=0;

                        l=1;

                        cout<<"cancelled"<<endl;

                        cout<<"money will be transfered to your account"<<endl;

                        break;
                    }}
                    if(l==0)
                    {
                        cout<<"the seat is not booked "<<endl;
                    }
            break;

            case 11:
                for(int i=0;i<18;i++)
                {
                    m=0;
                    if(checks==i && se[checks]==1)
                    {
                        m=1;

                        se[i]=0;

                        cout<<"cancelled"<<endl;

                        cout<<"money will be transfered to your account"<<endl;

                        break;
                    }}
                    if(m==0)
                    {
                        cout<<"the seat is not booked "<<endl;
                    }
            break;

            case 12:
                for(int i=0;i<18;i++)
                {
                    n=0;
                    if(checks==i && sea[checks]==1)
                    {
                        n=1;

                        sea[i]=0;

                        cout<<"cancelled"<<endl;

                        cout<<"money will be transfered to your account"<<endl;

                        break;
                    }}
                    if(n==0)
                    {
                        cout<<"the seat is not booked "<<endl;
                    }
            break;

            case 13:
                for(int i=0;i<18;i++)
                {
                    o=0;
                    if(checks==i && seat[checks]==1)
                    {
                        o=1;

                        seat[i]=0;

                        cout<<"cancelled"<<endl;

                        cout<<"money will be transfered to your account"<<endl;

                        break;
                    }}
                    if(o==0)
                    {
                        cout<<"the seat is not booked "<<endl;
                    }
            break;
            }
        }
        int main()
        {
            int ch;
            int s[18];

            int se[18];
            int sea[18];

            int seat[18];
            int place;


            for(int i=0;i<=17;i++)
            {
            s[i]=0;
            se[i]=0;
            sea[i]=0;
            seat[i]=0;
            }
            cout<<"    ";
             Sleep(110);
             cout<<"W";

             Sleep(110);
             cout<<"E";

             Sleep(110);
             cout<<"L";

             Sleep(110);
             cout<<"C";

             Sleep(110);
             cout<<"O";

             Sleep(110);
             cout<<"M";

             Sleep(110);
             cout<<"E";
             cout<<" ";

             Sleep(110);
             cout<<"T";

             Sleep(110);
             cout<<"O";
             cout<<" ";

             Sleep(110);
             cout<<"D";

             Sleep(110);
             cout<<"S";
             cout<<" ";

             Sleep(110);
             cout<<"T";

             Sleep(110);
             cout<<"R";

             Sleep(110);
             cout<<"A";

             Sleep(110);
             cout<<"V";

             Sleep(110);
             cout<<"E";

             Sleep(110);
             cout<<"L";

             Sleep(110);
             cout<<"S";

             cout<<endl;
            do
            {
                cout<<"***************************************************"<<endl;
                cout<<"             1. BUSES AVAILABLE"<<endl;
                cout<<"             2. TICKET RESERVATION"<<endl;
                cout<<"             3. CANCELLATION"<<endl;
                cout<<"             4. CHECK TICKETS"<<endl;
                cout<<"             5. EXIT"<<endl;
                cout<<"***************************************************"<<endl;
                cout<<"ENTER YOUR CHOICE->"<<endl;
                cin>>ch;
                switch(ch)
                {

                case 1:
                    buses_available();
                    break;

                case 2:
                    reservation(s,se,sea,seat);
                    break;

                case 3:
                    cancellation(s,se,sea,seat);
                    break;

                case 4:
                    checktickets(s,se,sea,seat);
                    break;

                case 5:
                    cout<<"THANK YOU"<<endl;
                    break;

                default:
                    break;
                }
            }while(ch<=4);

        return 0;
    }
