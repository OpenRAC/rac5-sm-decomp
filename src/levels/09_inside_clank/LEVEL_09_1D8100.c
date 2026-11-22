/* LEVEL_09:0x1D8100 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003807E0[];
extern char D_00212C80[];
extern char D_00380780[];

int func_1D6960(void);
void func_1D7B98(void *, int, int);

void *func_1D8100(void)
{
    if (*(int *)D_003807E0 == 0)
    {
        func_1D6960();
        func_1D7B98((void *)D_003807E0, (int)D_00212C80, (int)D_00380780);
    }
    return (void *)D_003807E0;
}
