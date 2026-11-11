extern int D_002E61C8;
extern char D_001DA460[];
extern char D_002E61C0[];
extern void func_199A38(void);
extern void func_19AC70(void *state, const void *table, void *extra);

void *func_19AA30(void) {
    if (!D_002E61C8) {
        func_199A38();
        func_19AC70(&D_002E61C8, D_001DA460, D_002E61C0);
    }
    return &D_002E61C8;
}
