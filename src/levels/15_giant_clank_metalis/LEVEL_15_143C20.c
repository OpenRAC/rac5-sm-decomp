/* LEVEL_15:0x143C20 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5660[];
extern char D_001737B0[];
extern char D_002F5608[];

int func_143020(void);
void func_142A28(void *, int, int);

void *func_143C20(void)
{
    if (*(int *)D_002F5660 == 0)
    {
        func_143020();
        func_142A28((void *)D_002F5660, (int)D_001737B0, (int)D_002F5608);
    }
    return (void *)D_002F5660;
}
