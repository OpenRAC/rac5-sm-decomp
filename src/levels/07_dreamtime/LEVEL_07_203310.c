/* LEVEL_07:0x203310 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003AEA30[];
extern char D_00240F78[];
extern char D_003AE9C8[];

int func_2026A0(void);
void func_2020A8(void *, int, int);

void *func_203310(void)
{
    if (*(int *)D_003AEA30 == 0)
    {
        func_2026A0();
        func_2020A8((void *)D_003AEA30, (int)D_00240F78, (int)D_003AE9C8);
    }
    return (void *)D_003AEA30;
}
