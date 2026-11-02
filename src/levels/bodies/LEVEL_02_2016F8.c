extern int D_003B0EF0;
extern char D_002427D8[];
extern char D_003B0F00[];
extern void func_201790(void);
extern void func_2029C8(void *state, const void *table, void *extra);

void *func_2016F8(void) {
    if (!D_003B0EF0) {
        func_201790();
        func_2029C8(&D_003B0EF0, D_002427D8, D_003B0F00);
    }
    return &D_003B0EF0;
}
