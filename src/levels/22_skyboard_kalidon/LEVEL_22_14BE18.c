extern int D_002E88F0;
extern char D_0017CED0[];
extern char D_002E8900[];
extern void func_14BEB0(void);
extern void func_14D0E8(void *state, const void *table, void *extra);

void *func_14BE18(void) {
    if (!D_002E88F0) {
        func_14BEB0();
        func_14D0E8(&D_002E88F0, D_0017CED0, D_002E8900);
    }
    return &D_002E88F0;
}
