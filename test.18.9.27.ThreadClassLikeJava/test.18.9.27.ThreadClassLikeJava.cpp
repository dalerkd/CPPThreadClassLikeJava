// test.18.9.27.ThreadClassLikeJava.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <exception>

/*
Java Thread类的特性:

start().启动线程.		√
run()是被执行的线程.	√


将this 传给 新线程,新线程通过this启动本进程的指定 方法

nofity()		×
wait()			×
信号

申请一个信号?关键段?
进入CS段:


*/

#include "Thread.h"

class MyThread : public Thread
{
private:
	void run() {
		printf("看起来不错哟,原来这就是线程类");
	}

};

void test() {
	try {
		MyThread* p = new MyThread();
		p->start();
	}
	catch (std::exception e) {
		std::cout<<e.what();
	}
	
}

int main()
{
	test();
	
	Sleep(-1);
	
    return 0;
}

