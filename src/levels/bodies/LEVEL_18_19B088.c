extern int D_002E61E8;
extern char D_001DA548[];
extern char D_002E6208[];
extern void func_19B268(void);
extern void func_19AC70(void *state, const void *table, void *extra);

void *func_19B088(void) {
    if (!D_002E61E8) {
        func_19B268();
        func_19AC70(&D_002E61E8, D_001DA548, D_002E6208);
    }
    return &D_002E61E8;
}
