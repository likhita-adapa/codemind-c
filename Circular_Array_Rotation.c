#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{

    int32_t N, numOps, queries, temp;
    int32_t i, j;

    scanf("%d", &N) ;
    scanf("%d", &numOps);
    scanf("%d", &queries);

    int32_t array[N], tempArray[N], indexOfAnswers[queries];

    for(i = 0; i < N; ++i)
        scanf("%d", &array[i]);
    for(i = 0; i < queries; ++i)
        scanf("%d", &indexOfAnswers[i]);

    for(i = 0; i < queries; i++)
    {
        printf("%d
",
          array[
                indexOfAnswers[i] >= numOps ?
               ((indexOfAnswers[i] - numOps) - (((indexOfAnswers[i] - numOps)/N) * N)) % N:
        (((indexOfAnswers[i] - numOps) - (((indexOfAnswers[i] - numOps)/N) * N)) + N) % N
              ]);
    }

    return 0;
}

