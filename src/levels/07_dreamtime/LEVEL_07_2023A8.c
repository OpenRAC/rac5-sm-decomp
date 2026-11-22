/* LEVEL_07:0x2023A8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003AE998[];
extern char D_00240D98[];
extern char D_003AE9A8[];

void *func_2024C0(void);
void func_2020A8(void *, int, int);

void *func_2023A8(void)
{
    if (*(int *)D_003AE998 == 0)
    {
        func_2024C0();
        func_2020A8((void *)D_003AE998, (int)D_00240D98, (int)D_003AE9A8);
    }
    return (void *)D_003AE998;
}
