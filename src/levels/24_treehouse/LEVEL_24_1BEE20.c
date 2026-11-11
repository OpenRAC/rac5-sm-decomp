extern int D_00362CE8;
extern char D_001F7398[];
extern char D_00362D08[];
extern void func_1BF000(void);
extern void func_1BEA08(void *state, const void *table, void *extra);

void *func_1BEE20(void) {
    if (!D_00362CE8) {
        func_1BF000();
        func_1BEA08(&D_00362CE8, D_001F7398, D_00362D08);
    }
    return &D_00362CE8;
}
