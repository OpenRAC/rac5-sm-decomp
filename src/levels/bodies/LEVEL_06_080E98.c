extern void *func_080F28(void);
extern unsigned int func_080E00(long long);
extern char *D_001E515C;

unsigned int func_080E98(long long value)
{
    if (func_080F28() == 0) {
        return 0;
    }
    return func_080E00(value) |
           *(unsigned int *)(D_001E515C + 500);
}
