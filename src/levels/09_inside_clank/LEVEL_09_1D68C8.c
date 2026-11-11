extern int D_00380770;
extern char D_00212A50[];
extern char D_00380780[];
extern void func_1D6960(void);
extern void func_1D7B98(void *state, const void *table, void *extra);

void *func_1D68C8(void) {
    if (!D_00380770) {
        func_1D6960();
        func_1D7B98(&D_00380770, D_00212A50, D_00380780);
    }
    return &D_00380770;
}
