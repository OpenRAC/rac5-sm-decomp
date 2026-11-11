extern int D_003B4648;
extern char D_00245C10[];
extern char D_003B4640[];
extern void func_205CB8(void);
extern void func_206EF0(void *state, const void *table, void *extra);

void *func_206CB0(void) {
    if (!D_003B4648) {
        func_205CB8();
        func_206EF0(&D_003B4648, D_00245C10, D_003B4640);
    }
    return &D_003B4648;
}
