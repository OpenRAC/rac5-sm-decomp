/* LEVEL_09:0x1D8D20 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00380810[];
extern char D_00212DD8[];
extern char D_003807C8[];

int func_1D8190(void);
void func_1D7B98(void *, int, int);

void *func_1D8D20(void)
{
    if (*(int *)D_00380810 == 0)
    {
        func_1D8190();
        func_1D7B98((void *)D_00380810, (int)D_00212DD8, (int)D_003807C8);
    }
    return (void *)D_00380810;
}
