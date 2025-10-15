include<stdio.h>

int main()
{
    long bytes;
    printf("Enter bytes: ");
    scanf("%ld", &bytes);
    printf("KB: %.2f, MB: %.2f, GB: %.2f\n", (float)bytes/1024, (float)bytes/(1024*1024), (float)bytes/(1024*1024*1024));
}
