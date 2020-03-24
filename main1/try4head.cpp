#include<WiringPi.h>
#include<stdio.h>
#include<iostream>
#include<thread>
#include<chrono>// for time delay in c++
#include<list>// 后加
#include<mutex>// 后加


#define redEW 18 // Pin 12
#define redSN 23 // Pin 16
#define greenEW 25 // Pin 22
#define greenSN 12 // Pin 32
#define yellowEW 2// Pin 13
#define yellowSN 3 // Pin 15
#define sider 5// Pin 29 BCM !!!
#define sideg 6// Pin 31 BCM !!!
#define extrasensor1 4//Pin 16
#define extrasensor2 5 //Pin 18
#define button 11//Pin 11

using namespace std;
