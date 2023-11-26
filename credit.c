#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long creditNum = get_long("Number:\n");

    /**multiply every other digit by 2,
     * starting with second to last digit
     *
     * then add those products' digits together
    */
    printf("Printing %lu\n", creditNum);

    long processThis = creditNum;
    long modThis = 0;
    long cumulNum = 0;
    long sumDigits = 0;

    while(processThis != 0)
    {
      processThis /= 10;
      printf("Printing div 10 result %lu\n", processThis);
      modThis = processThis % 10;
      printf("Printing mod 10 result %lu\n", modThis);
      // multiple digits by two, then add sum of those digits
      sumDigits = (modThis * 2);
      cumulNum = cumulNum + (modThis * 2);
      printf("Printing cumulative number %lu\n", cumulNum);

    }

    //printf("Printing %lu\n", creditNum);
    //printf("Printing %lu\n", processThis);
    //printf("Printing %lu\n", cumulNum);


}
