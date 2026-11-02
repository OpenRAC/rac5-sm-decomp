extern int D_00390348;
extern char D_00217100[];
extern char D_00390340[];
extern void func_1DBEF0(void);
extern void func_1DD128(void *state, const void *table, void *extra);

void *func_1DCEE8(void) {
    if (!D_00390348) {
        func_1DBEF0();
        func_1DD128(&D_00390348, D_00217100, D_00390340);
    }
    return &D_00390348;
}
