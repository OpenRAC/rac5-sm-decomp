extern int D_003A26C8;
extern char D_002347C0[];
extern char D_003A26C0[];
extern void func_1F5B50(void);
extern void func_1F6D88(void *state, const void *table, void *extra);

void *func_1F6B48(void) {
    if (!D_003A26C8) {
        func_1F5B50();
        func_1F6D88(&D_003A26C8, D_002347C0, D_003A26C0);
    }
    return &D_003A26C8;
}
