/* LEVEL_09:0x1D8EE0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00380850[];
extern char D_00212E38[];
extern char D_003807C8[];

int func_1D8190(void);
void func_1D7B98(void *, int, int);

void *func_1D8EE0(void)
{
    if (*(int *)D_00380850 == 0)
    {
        func_1D8190();
        func_1D7B98((void *)D_00380850, (int)D_00212E38, (int)D_003807C8);
    }
    return (void *)D_00380850;
}
