extern void *func_084A68(void);
extern unsigned int func_084940(int);
extern char *D_001E005C;

unsigned int func_0849D8(int value)
{
    if (func_084A68() == 0) {
        return 0;
    }
    return func_084940(value) |
           *(unsigned int *)(D_001E005C + 500);
}
