extern int D_002D73F0;
extern char D_001CB2D8[];
extern char D_002D7400[];
extern void func_18BBE0(void);
extern void func_18CE18(void *state, const void *table, void *extra);

void *func_18BB48(void) {
    if (!D_002D73F0) {
        func_18BBE0();
        func_18CE18(&D_002D73F0, D_001CB2D8, D_002D7400);
    }
    return &D_002D73F0;
}
