#define FLAG (*(volatile unsigned long long *)0x12001000)

void func_0066F0(void)
{
    if ((FLAG & 2) == 0) {
        while ((FLAG & 2) == 0)
            ;
    }
    FLAG = FLAG | 2;
}
