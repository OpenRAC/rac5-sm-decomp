extern int D_00366DC8;
extern char D_001F8880[];
extern char D_00366DC0[];
extern void func_1BFF38(void);
extern void func_1C1170(void *state, const void *table, void *extra);

void *func_1C0F30(void) {
    if (!D_00366DC8) {
        func_1BFF38();
        func_1C1170(&D_00366DC8, D_001F8880, D_00366DC0);
    }
    return &D_00366DC8;
}
