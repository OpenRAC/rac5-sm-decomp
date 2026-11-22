/* LEVEL_23:0x1C16D8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00366E20[];
extern char D_001F8990[];
extern char D_00366DC0[];

int func_1BFF38(void);
void func_1C1170(void *, int, int);

void *func_1C16D8(void)
{
    if (*(int *)D_00366E20 == 0)
    {
        func_1BFF38();
        func_1C1170((void *)D_00366E20, (int)D_001F8990, (int)D_00366DC0);
    }
    return (void *)D_00366E20;
}
