extern void *func_079008(void);
extern unsigned int func_078E48(int);
extern char *D_001A570C;

unsigned int func_078F38(int value)
{
    if (func_079008() == 0) {
        return 0;
    }
    return func_078E48(value) |
           *(unsigned int *)(D_001A570C + 500);
}
