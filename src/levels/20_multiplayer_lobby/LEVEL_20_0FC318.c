extern int D_002062A8;
extern char D_00131B58[];
extern char D_002062C8[];
extern void func_0FC4F8(void);
extern void func_0FBF00(void *state, const void *table, void *extra);

void *func_0FC318(void) {
    if (!D_002062A8) {
        func_0FC4F8();
        func_0FBF00(&D_002062A8, D_00131B58, D_002062C8);
    }
    return &D_002062A8;
}
