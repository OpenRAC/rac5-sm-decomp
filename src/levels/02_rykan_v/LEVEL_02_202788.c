extern int D_003B0F08;
extern char D_00242900[];
extern char D_003B0F00[];
extern void func_201790(void);
extern void func_2029C8(void *state, const void *table, void *extra);

void *func_202788(void) {
    if (!D_003B0F08) {
        func_201790();
        func_2029C8(&D_003B0F08, D_00242900, D_003B0F00);
    }
    return &D_003B0F08;
}
