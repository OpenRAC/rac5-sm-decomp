extern void *func_06C790(void);
extern unsigned int func_06C668(long long);
extern char *D_0014AEDC;

unsigned int func_06C700(long long value)
{
    if (func_06C790() == 0) {
        return 0;
    }
    return func_06C668(value) |
           *(unsigned int *)(D_0014AEDC + 500);
}
