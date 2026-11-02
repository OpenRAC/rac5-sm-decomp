extern int D_003859C8;
extern char D_00218150[];
extern char D_003859C0[];
extern void func_1DBA40(void);
extern void func_1DCC78(void *state, const void *table, void *extra);

void *func_1DCA38(void) {
    if (!D_003859C8) {
        func_1DBA40();
        func_1DCC78(&D_003859C8, D_00218150, D_003859C0);
    }
    return &D_003859C8;
}
