extern int D_003A26B0;
extern char D_00234698[];
extern char D_003A26C0[];
extern void func_1F5B50(void);
extern void func_1F6D88(void *state, const void *table, void *extra);

void *func_1F5AB8(void) {
    if (!D_003A26B0) {
        func_1F5B50();
        func_1F6D88(&D_003A26B0, D_00234698, D_003A26C0);
    }
    return &D_003A26B0;
}
