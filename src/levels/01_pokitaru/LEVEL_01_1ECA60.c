extern int D_00398F70;
extern char D_0022B2E0[];
extern char D_00398F80[];
extern void func_1ECAF8(void);
extern void func_1EDD30(void *state, const void *table, void *extra);

void *func_1ECA60(void) {
    if (!D_00398F70) {
        func_1ECAF8();
        func_1EDD30(&D_00398F70, D_0022B2E0, D_00398F80);
    }
    return &D_00398F70;
}
