/* LEVEL_07:0x203150 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003AE9F0[];
extern char D_00240F18[];
extern char D_003AE9C8[];

int func_2026A0(void);
void func_2020A8(void *, int, int);

void *func_203150(void)
{
    if (*(int *)D_003AE9F0 == 0)
    {
        func_2026A0();
        func_2020A8((void *)D_003AE9F0, (int)D_00240F18, (int)D_003AE9C8);
    }
    return (void *)D_003AE9F0;
}
