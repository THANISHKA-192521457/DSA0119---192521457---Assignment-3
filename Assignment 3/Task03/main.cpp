#include <iostream>
class Event {
 int rows,seats; char** map; int booked=0;
public:
 Event(int r,int s):rows(r<0?0:r),seats(s<0?0:s),map(rows?new char*[rows]:nullptr){
   for(int i=0;i<rows;++i){map[i]=new char[seats]; for(int j=0;j<seats;++j)map[i][j]='O';}
   std::cout<<"Created "<<rows<<"x"<<seats<<"\n";
 }
 bool book(int r,int s){if(r<0||r>=rows||s<0||s>=seats||map[r][s]=='X')return false;map[r][s]='X';++booked;return true;}
 bool cancel(int r,int s){if(r<0||r>=rows||s<0||s>=seats||map[r][s]!='X')return false;map[r][s]='O';--booked;return true;}
 ~Event(){for(int i=0;i<rows;++i)delete[] map[i];delete[] map;std::cout<<"Closed; booked seats="<<booked<<"\n";}
};
int main(){Event stackEvent(2,3);stackEvent.book(0,1);stackEvent.cancel(0,1);stackEvent.book(1,2);
 {Event blockEvent(1,2);blockEvent.book(0,0);}
 Event* heapEvent=new Event(2,2);heapEvent->book(1,1);delete heapEvent;
 Event zero(0,5);
}
