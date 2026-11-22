/* LEVEL_21:0x142D28 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F55D8[];
extern char D_001735E8[];
extern char D_002F55E8[];

void *func_142E40(void);
void func_142A28(void *, int, int);

void *func_142D28(void)
{
    if (*(int *)D_002F55D8 == 0)
    {
        func_142E40();
        func_142A28((void *)D_002F55D8, (int)D_001735E8, (int)D_002F55E8);
    }
    return (void *)D_002F55D8;
}
