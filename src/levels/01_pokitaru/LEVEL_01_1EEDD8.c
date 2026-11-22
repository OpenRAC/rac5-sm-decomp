/* LEVEL_01:0x1EEDD8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00398FF0[];
extern char D_0022B638[];
extern char D_00398FC8[];

int func_1EE328(void);
void func_1EDD30(void *, int, int);

void *func_1EEDD8(void)
{
    if (*(int *)D_00398FF0 == 0)
    {
        func_1EE328();
        func_1EDD30((void *)D_00398FF0, (int)D_0022B638, (int)D_00398FC8);
    }
    return (void *)D_00398FF0;
}
