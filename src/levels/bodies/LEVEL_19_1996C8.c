extern int D_002E63F0;
extern char D_001DA178[];
extern char D_002E6400[];
extern void func_199760(void);
extern void func_19A998(void *state, const void *table, void *extra);

void *func_1996C8(void) {
    if (!D_002E63F0) {
        func_199760();
        func_19A998(&D_002E63F0, D_001DA178, D_002E6400);
    }
    return &D_002E63F0;
}
