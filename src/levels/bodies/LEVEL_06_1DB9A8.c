extern int D_003859B0;
extern char D_00218028[];
extern char D_003859C0[];
extern void func_1DBA40(void);
extern void func_1DCC78(void *state, const void *table, void *extra);

void *func_1DB9A8(void) {
    if (!D_003859B0) {
        func_1DBA40();
        func_1DCC78(&D_003859B0, D_00218028, D_003859C0);
    }
    return &D_003859B0;
}
