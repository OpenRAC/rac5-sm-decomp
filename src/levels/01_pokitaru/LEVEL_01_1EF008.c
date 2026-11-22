/* LEVEL_01:0x1EF008 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00399040[];
extern char D_0022B6B0[];
extern char D_00398FC8[];

int func_1EE328(void);
void func_1EDD30(void *, int, int);

void *func_1EF008(void)
{
    if (*(int *)D_00399040 == 0)
    {
        func_1EE328();
        func_1EDD30((void *)D_00399040, (int)D_0022B6B0, (int)D_00398FC8);
    }
    return (void *)D_00399040;
}
