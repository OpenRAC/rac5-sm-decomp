/* LEVEL_21:0x143AD0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5630[];
extern char D_00173768[];
extern char D_002F5608[];

int func_143020(void);
void func_142A28(void *, int, int);

void *func_143AD0(void)
{
    if (*(int *)D_002F5630 == 0)
    {
        func_143020();
        func_142A28((void *)D_002F5630, (int)D_00173768, (int)D_002F5608);
    }
    return (void *)D_002F5630;
}
