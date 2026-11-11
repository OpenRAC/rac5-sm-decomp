extern int D_003B4108;
extern char D_00246280[];
extern char D_003B4100[];
extern void func_205188(void);
extern void func_2063C0(void *state, const void *table, void *extra);

void *func_206180(void) {
    if (!D_003B4108) {
        func_205188();
        func_2063C0(&D_003B4108, D_00246280, D_003B4100);
    }
    return &D_003B4108;
}
