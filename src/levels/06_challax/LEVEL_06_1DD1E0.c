/* LEVEL_06:0x1DD1E0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00385A20[];
extern char D_00218260[];
extern char D_003859C0[];

int func_1DBA40(void);
void func_1DCC78(void *, int, int);

void *func_1DD1E0(void)
{
    if (*(int *)D_00385A20 == 0)
    {
        func_1DBA40();
        func_1DCC78((void *)D_00385A20, (int)D_00218260, (int)D_003859C0);
    }
    return (void *)D_00385A20;
}
