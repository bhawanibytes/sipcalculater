#include <stdio.h>

int main()
    {
        int i,initialsip,stepup,t,sipcycle,lastsip;
        printf("Hi! This is a basic SIP program.\n Please enter Ential SIP Amount");
        scanf("%d", &initialsip );
        printf("Please enter step-up percentage");
        scanf("%d", &stepup );
        printf("Please enter investment time");
        scanf("%d", &t );
        sipcycle=t*2;
        for (i = 0; i<sipcycle; i++)
            {
                lastsip=(initialsip*stepup)/100+initialsip;
                initialsip=lastsip;
            }

        // Print the last SIP amount
        printf("Last SIP amount after %d years:%d",t,lastsip);

        
    }
