extern int D_00366DE8;
extern char D_001F8968[];
extern char D_00366E08[];
extern void func_1C1768(void);
extern void func_1C1170(void *state, const void *table, void *extra);

void *func_1C1588(void) {
    if (!D_00366DE8) {
        func_1C1768();
        func_1C1170(&D_00366DE8, D_001F8968, D_00366E08);
    }
    return &D_00366DE8;
}
