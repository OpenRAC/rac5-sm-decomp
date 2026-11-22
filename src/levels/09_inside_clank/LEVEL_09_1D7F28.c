/* LEVEL_09:0x1D7F28 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003807B8[];
extern char D_00212C40[];
extern char D_003807A8[];

void *func_1D7FB0(void);
void func_1D7B98(void *, int, int);

void *func_1D7F28(void)
{
    if (*(int *)D_003807B8 == 0)
    {
        func_1D7FB0();
        func_1D7B98((void *)D_003807B8, (int)D_00212C40, (int)D_003807A8);
    }
    return (void *)D_003807B8;
}
