extern int D_00398F88;
extern char D_0022B400[];
extern char D_00398F80[];
extern void func_1ECAF8(void);
extern void func_1EDD30(void *state, const void *table, void *extra);

void *func_1EDAF0(void) {
    if (!D_00398F88) {
        func_1ECAF8();
        func_1EDD30(&D_00398F88, D_0022B400, D_00398F80);
    }
    return &D_00398F88;
}
