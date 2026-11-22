/* LEVEL_07:0x203380 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003AEA40[];
extern char D_00240F90[];
extern char D_003AE9C8[];

int func_2026A0(void);
void func_2020A8(void *, int, int);

void *func_203380(void)
{
    if (*(int *)D_003AEA40 == 0)
    {
        func_2026A0();
        func_2020A8((void *)D_003AEA40, (int)D_00240F90, (int)D_003AE9C8);
    }
    return (void *)D_003AEA40;
}
