#include <pthread.h>

static void * func(void * arg)
{
  return 0; 
}

int main()
{
    pthread_t t;
    pthread_create(&t, NULL, func, NULL);
}