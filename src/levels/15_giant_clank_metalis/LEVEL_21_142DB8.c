/* LEVEL_21:0x142DB8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F55F8[];
extern char D_00173600[];
extern char D_002F55E8[];

void *func_142E40(void);
void func_142A28(void *, int, int);

void *func_142DB8(void)
{
    if (*(int *)D_002F55F8 == 0)
    {
        func_142E40();
        func_142A28((void *)D_002F55F8, (int)D_00173600, (int)D_002F55E8);
    }
    return (void *)D_002F55F8;
}
