extern int D_003B4668;
extern char D_00245CF8[];
extern char D_003B4688[];
extern void func_2074E8(void);
extern void func_206EF0(void *state, const void *table, void *extra);

void *func_207308(void) {
    if (!D_003B4668) {
        func_2074E8();
        func_206EF0(&D_003B4668, D_00245CF8, D_003B4688);
    }
    return &D_003B4668;
}
