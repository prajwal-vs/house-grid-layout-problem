#include <iostream>

using namespace std;

int main()
{
    int n; // Number of rooms
    int t1,t2; //Time spent by person in each room
    int p1,p2; //Two persons
    int tot1=0,tot2=0; //Total time spent by each person

    cout<<"Enter the Number of Rooms"<<endl;
    cin>>n;

    cout<<"Time spent by person P1 "<<endl;
    cin>>t1;

	cout<<"Time spent by person P2 "<<endl;
    cin>>t2;

    for(p1=1;p1<=n;p1++)  // Person 1 enters room from first to last room
    {
        tot1=tot1+t1;     //Increments every time, When he enters new room
        {
	      tot2=0;

            for(p2=n;p2>=1;p2--)  // Person 2 enters room from last room to first room
            {
                tot2=tot2+t2;     //Increments every time, When he enters new room

                if(tot1==tot2 && p1==p2)  //Check whether they have same total times and Rooms
				{
					cout<<"Room number where two persons meet together = " << p1<<endl;
					system("PAUSE");
					return 0;
	            }
            }
	    }
	}
    cout<<"They won't meet together"<<endl;

    system("PAUSE");
    return 0;
}
