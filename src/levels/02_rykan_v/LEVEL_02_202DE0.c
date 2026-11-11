extern int D_003B0F28;
extern char D_002429E8[];
extern char D_003B0F48[];
extern void func_202FC0(void);
extern void func_2029C8(void *state, const void *table, void *extra);

void *func_202DE0(void) {
    if (!D_003B0F28) {
        func_202FC0();
        func_2029C8(&D_003B0F28, D_002429E8, D_003B0F48);
    }
    return &D_003B0F28;
}
