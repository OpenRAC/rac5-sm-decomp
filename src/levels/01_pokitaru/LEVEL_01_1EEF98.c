/* LEVEL_01:0x1EEF98 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00399030[];
extern char D_0022B698[];
extern char D_00398FC8[];

int func_1EE328(void);
void func_1EDD30(void *, int, int);

void *func_1EEF98(void)
{
    if (*(int *)D_00399030 == 0)
    {
        func_1EE328();
        func_1EDD30((void *)D_00399030, (int)D_0022B698, (int)D_00398FC8);
    }
    return (void *)D_00399030;
}
