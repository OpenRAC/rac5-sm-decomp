extern int D_00390330;
extern char D_00216FD8[];
extern char D_00390340[];
extern void func_1DBEF0(void);
extern void func_1DD128(void *state, const void *table, void *extra);

void *func_1DBE58(void) {
    if (!D_00390330) {
        func_1DBEF0();
        func_1DD128(&D_00390330, D_00216FD8, D_00390340);
    }
    return &D_00390330;
}
