extern int D_002F55E8;
extern char D_00173618[];
extern char D_002F5608[];
extern void func_143020(void);
extern void func_142A28(void *state, const void *table, void *extra);

void *func_142E40(void) {
    if (!D_002F55E8) {
        func_143020();
        func_142A28(&D_002F55E8, D_00173618, D_002F5608);
    }
    return &D_002F55E8;
}
