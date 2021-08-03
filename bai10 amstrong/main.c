#include <stdio.h>
#include <stdlib.h>
#include<math.h>
bool checkArmstrong(int x){
    int sum = 0, temp, flag = x;

    if(x >= 100 && x < 1000) {
        while(flag > 0) {
            temp = flag % 10;
            sum += pow((double)temp, 3);
            flag /= 10;
        }
    }
    else {
        while(flag > 0) {
            temp = flag % 10;
            sum += pow(double(temp), 4);
            flag /= 10;
        }
    }

 return (x == sum)? true: false;
int main()
{
	  for(int i = 100; i < 10000; i ++)
        if(checkArmstrong(i))
            std::cout << i << "\t";
    std::cin.get();


    return 0;
}
