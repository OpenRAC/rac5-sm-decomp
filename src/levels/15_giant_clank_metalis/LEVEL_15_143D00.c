/* LEVEL_15:0x143D00 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5680[];
extern char D_001737E0[];
extern char D_002F5608[];

int func_143020(void);
void func_142A28(void *, int, int);

void *func_143D00(void)
{
    if (*(int *)D_002F5680 == 0)
    {
        func_143020();
        func_142A28((void *)D_002F5680, (int)D_001737E0, (int)D_002F5608);
    }
    return (void *)D_002F5680;
}
