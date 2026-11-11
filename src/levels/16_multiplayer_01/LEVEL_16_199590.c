extern int D_002E6248;
extern char D_001DA0F0[];
extern char D_002E6240[];
extern void func_198598(void);
extern void func_1997D0(void *state, const void *table, void *extra);

void *func_199590(void) {
    if (!D_002E6248) {
        func_198598();
        func_1997D0(&D_002E6248, D_001DA0F0, D_002E6240);
    }
    return &D_002E6248;
}
