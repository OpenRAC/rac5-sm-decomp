extern int D_003A26E8;
extern char D_002348A8[];
extern char D_003A2708[];
extern void func_1F7380(void);
extern void func_1F6D88(void *state, const void *table, void *extra);

void *func_1F71A0(void) {
    if (!D_003A26E8) {
        func_1F7380();
        func_1F6D88(&D_003A26E8, D_002348A8, D_003A2708);
    }
    return &D_003A26E8;
}
