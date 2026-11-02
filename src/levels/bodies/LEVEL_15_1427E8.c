extern int D_002F55C8;
extern char D_00173530[];
extern char D_002F55C0[];
extern void func_1417F0(void);
extern void func_142A28(void *state, const void *table, void *extra);

void *func_1427E8(void) {
    if (!D_002F55C8) {
        func_1417F0();
        func_142A28(&D_002F55C8, D_00173530, D_002F55C0);
    }
    return &D_002F55C8;
}
