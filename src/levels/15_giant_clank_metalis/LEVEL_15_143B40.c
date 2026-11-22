/* LEVEL_15:0x143B40 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5640[];
extern char D_00173780[];
extern char D_002F5608[];

int func_143020(void);
void func_142A28(void *, int, int);

void *func_143B40(void)
{
    if (*(int *)D_002F5640 == 0)
    {
        func_143020();
        func_142A28((void *)D_002F5640, (int)D_00173780, (int)D_002F5608);
    }
    return (void *)D_002F5640;
}
