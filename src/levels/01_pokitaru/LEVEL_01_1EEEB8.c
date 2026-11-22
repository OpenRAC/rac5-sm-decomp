/* LEVEL_01:0x1EEEB8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00399010[];
extern char D_0022B668[];
extern char D_00398FC8[];

int func_1EE328(void);
void func_1EDD30(void *, int, int);

void *func_1EEEB8(void)
{
    if (*(int *)D_00399010 == 0)
    {
        func_1EE328();
        func_1EDD30((void *)D_00399010, (int)D_0022B668, (int)D_00398FC8);
    }
    return (void *)D_00399010;
}
