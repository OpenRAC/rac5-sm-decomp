extern void *func_08E9E0(void);
extern unsigned int func_08E8B8(int);
extern char *D_0020B21C;

unsigned int func_08E950(int value)
{
    if (func_08E9E0() == 0) {
        return 0;
    }
    return func_08E8B8(value) |
           *(unsigned int *)(D_0020B21C + 500);
}
