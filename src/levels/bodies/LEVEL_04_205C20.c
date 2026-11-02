extern int D_003B4630;
extern char D_00245AE8[];
extern char D_003B4640[];
extern void func_205CB8(void);
extern void func_206EF0(void *state, const void *table, void *extra);

void *func_205C20(void) {
    if (!D_003B4630) {
        func_205CB8();
        func_206EF0(&D_003B4630, D_00245AE8, D_003B4640);
    }
    return &D_003B4630;
}
