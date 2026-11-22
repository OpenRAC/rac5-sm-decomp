/* LEVEL_07:0x202610 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003AE9E0[];
extern char D_00240DF0[];
extern char D_003AE980[];

int func_200E70(void);
void func_2020A8(void *, int, int);

void *func_202610(void)
{
    if (*(int *)D_003AE9E0 == 0)
    {
        func_200E70();
        func_2020A8((void *)D_003AE9E0, (int)D_00240DF0, (int)D_003AE980);
    }
    return (void *)D_003AE9E0;
}
