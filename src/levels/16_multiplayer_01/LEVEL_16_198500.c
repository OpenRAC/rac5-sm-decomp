extern int D_002E6230;
extern char D_001D9FC8[];
extern char D_002E6240[];
extern void func_198598(void);
extern void func_1997D0(void *state, const void *table, void *extra);

void *func_198500(void) {
    if (!D_002E6230) {
        func_198598();
        func_1997D0(&D_002E6230, D_001D9FC8, D_002E6240);
    }
    return &D_002E6230;
}
