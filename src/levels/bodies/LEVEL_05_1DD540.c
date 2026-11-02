extern int D_00390368;
extern char D_002171E8[];
extern char D_00390388[];
extern void func_1DD720(void);
extern void func_1DD128(void *state, const void *table, void *extra);

void *func_1DD540(void) {
    if (!D_00390368) {
        func_1DD720();
        func_1DD128(&D_00390368, D_002171E8, D_00390388);
    }
    return &D_00390368;
}
