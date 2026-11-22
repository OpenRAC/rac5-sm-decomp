/* LEVEL_15:0x143D70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5690[];
extern char D_001737F8[];
extern char D_002F5608[];

int func_143020(void);
void func_142A28(void *, int, int);

void *func_143D70(void)
{
    if (*(int *)D_002F5690 == 0)
    {
        func_143020();
        func_142A28((void *)D_002F5690, (int)D_001737F8, (int)D_002F5608);
    }
    return (void *)D_002F5690;
}
