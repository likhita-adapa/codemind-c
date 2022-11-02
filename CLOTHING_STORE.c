#define __STDC_WANT_LIB_EXT1__ 1
#include <math.h>
#include <stdio.h>
enum { MAX_SAMPLES = 1000 };  
int values[ MAX_SAMPLES ];    
int counts[ MAX_SAMPLES ];    

void add( int value )
{
  int hash = abs( value ) % MAX_SAMPLES;  

  for (int offset = 0;  offset < MAX_SAMPLES;  offset++) 
  {
    int index = (hash + offset) % MAX_SAMPLES;

    if (counts[index] == 0)      
    
      values[index] = value;     
      

    if (values[index] == value)  
    
    {                            
        
      counts[index] += 1;        
      
      break;                     
      
    }
  }
}


int read_int()
{
  int value;
  scanf( "%d", &value );
  return value;
}


int main()
{
 
  for (int n = read_int();  n;  n--)
    add( read_int() );

 
  int num_pairs = 0;
  for (int n = 0;  n < MAX_SAMPLES;  n++)
    num_pairs += counts[n] / 2;

  printf( "%d", num_pairs );
}
