//
//  main.cpp
//  warmGas
//
//  Created by Du Pupu on 7/12/2015.
//  Copyright © 2015 Du Pupu. All rights reserved.
//

#include <iostream>
#include <thread>

using namespace std;;;

void heat2(){
    bool water=true;
    while(true){
        water=!water;
    }
}

int main(int argc, const char * argv[]) {
    cout << "Heating...\n";
    thread t1(heat2);thread t2(heat2);thread t3(heat2);
    t1.join();t2.join();t3.join();
    _exit(0);
}

