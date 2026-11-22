/* LEVEL_21:0x143C90 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5670[];
extern char D_001737C8[];
extern char D_002F5608[];

int func_143020(void);
void func_142A28(void *, int, int);

void *func_143C90(void)
{
    if (*(int *)D_002F5670 == 0)
    {
        func_143020();
        func_142A28((void *)D_002F5670, (int)D_001737C8, (int)D_002F5608);
    }
    return (void *)D_002F5670;
}
