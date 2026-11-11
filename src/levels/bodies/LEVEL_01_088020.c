extern void *func_0880B0(void);
extern unsigned int func_087F88(int);
extern char *D_001F625C;

unsigned int func_088020(int value)
{
    if (func_0880B0() == 0) {
        return 0;
    }
    return func_087F88(value) |
           *(unsigned int *)(D_001F625C + 500);
}
