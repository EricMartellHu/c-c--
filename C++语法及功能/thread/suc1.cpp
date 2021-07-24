#include <iostream>
#include <thread>
#include <fstream>
#include <unistd.h>

using namespace std;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;

#define   DONE  1
#define   EMPTY  2
int i = EMPTY; 
int a = 1;

void *pxy(void*)
{
	while(1)
	{
		pthread_mutex_lock(&mutex);
		i = EMPTY;
		a += 1;
		sleep(1);
		if(a >= 10)
		{
			break;
		}
		pthread_mutex_unlock(&mutex);
	}
		
}

int main(void)
{
	ofstream File;
	File.open("ts.txt");
	
	pthread_t son;
	pthread_create(&son ,NULL ,pxy ,NULL);
	
	pthread_mutex_lock(&mutex);
	while(1)
	{
		if(i == EMPTY)
		{	
			File << a <<"  ";
			
			i = DONE;
			
			if(a >= 10)
			{
				pthread_join(son, NULL);
				pthread_exit(NULL);
				
				File.close();
				
				pthread_mutex_unlock(&mutex);
				pthread_mutex_destroy(&mutex);
				return 0;
			}
		}
		pthread_mutex_unlock(&mutex);	
	}
	//pthread_join(son, NULL);
	//pthread_exit(NULL);
	
	return 0;
}