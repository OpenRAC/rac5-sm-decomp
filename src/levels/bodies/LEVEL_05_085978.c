extern void *func_085A08(void);
extern unsigned int func_0858E0(long long);
extern char *D_001E55DC;

unsigned int func_085978(long long value)
{
    if (func_085A08() == 0) {
        return 0;
    }
    return func_0858E0(value) |
           *(unsigned int *)(D_001E55DC + 500);
}
