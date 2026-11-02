extern int D_003859E8;
extern char D_00218238[];
extern char D_00385A08[];
extern void func_1DD270(void);
extern void func_1DCC78(void *state, const void *table, void *extra);

void *func_1DD090(void) {
    if (!D_003859E8) {
        func_1DD270();
        func_1DCC78(&D_003859E8, D_00218238, D_00385A08);
    }
    return &D_003859E8;
}
