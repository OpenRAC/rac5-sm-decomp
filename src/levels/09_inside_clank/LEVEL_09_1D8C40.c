/* LEVEL_09:0x1D8C40 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003807F0[];
extern char D_00212DA8[];
extern char D_003807C8[];

int func_1D8190(void);
void func_1D7B98(void *, int, int);

void *func_1D8C40(void)
{
    if (*(int *)D_003807F0 == 0)
    {
        func_1D8190();
        func_1D7B98((void *)D_003807F0, (int)D_00212DA8, (int)D_003807C8);
    }
    return (void *)D_003807F0;
}
