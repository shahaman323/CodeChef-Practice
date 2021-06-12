#include<iostream>
int main()
{
	enum Direction { east , west=102 , north , south
	};
	//enum Direction1 {11 , 22 , 33 , 44
//	};
	Direction myDisha;
	myDisha=south;
	std::cout<<"I am heading towards :"<<myDisha<<std::endl;
	return 0;
}
