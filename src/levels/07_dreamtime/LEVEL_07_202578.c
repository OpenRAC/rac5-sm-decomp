/* LEVEL_07:0x202578 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003AE9D0[];
extern char D_00240DE0[];
extern char D_003AE980[];

int func_200E70(void);
void func_2020A8(void *, int, int);

void *func_202578(void)
{
    if (*(int *)D_003AE9D0 == 0)
    {
        func_200E70();
        func_2020A8((void *)D_003AE9D0, (int)D_00240DE0, (int)D_003AE980);
    }
    return (void *)D_003AE9D0;
}
