/* LEVEL_09:0x1D7E98 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00380798[];
extern char D_00212C28[];
extern char D_003807A8[];

void *func_1D7FB0(void);
void func_1D7B98(void *, int, int);

void *func_1D7E98(void)
{
    if (*(int *)D_00380798 == 0)
    {
        func_1D7FB0();
        func_1D7B98((void *)D_00380798, (int)D_00212C28, (int)D_003807A8);
    }
    return (void *)D_00380798;
}
