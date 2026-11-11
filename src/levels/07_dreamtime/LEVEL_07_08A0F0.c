extern void *func_08A180(void);
extern unsigned int func_08A058(int);
extern char *D_0020A55C;

unsigned int func_08A0F0(int value)
{
    if (func_08A180() == 0) {
        return 0;
    }
    return func_08A058(value) |
           *(unsigned int *)(D_0020A55C + 500);
}
