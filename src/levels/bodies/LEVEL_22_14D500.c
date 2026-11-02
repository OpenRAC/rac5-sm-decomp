extern int D_002E8928;
extern char D_0017D0D8[];
extern char D_002E8948[];
extern void func_14D6E0(void);
extern void func_14D0E8(void *state, const void *table, void *extra);

void *func_14D500(void) {
    if (!D_002E8928) {
        func_14D6E0();
        func_14D0E8(&D_002E8928, D_0017D0D8, D_002E8948);
    }
    return &D_002E8928;
}
