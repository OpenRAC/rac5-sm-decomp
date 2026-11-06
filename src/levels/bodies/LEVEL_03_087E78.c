extern void *func_087F08(void);
extern unsigned int func_087DE0(long long);
extern char *D_0020E8DC;

unsigned int func_087E78(long long value)
{
    if (func_087F08() == 0) {
        return 0;
    }
    return func_087DE0(value) |
           *(unsigned int *)(D_0020E8DC + 500);
}
