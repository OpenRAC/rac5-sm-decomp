extern int D_00206288;
extern char D_00131A70[];
extern char D_00206280[];
extern void func_0FACC8(void);
extern void func_0FBF00(void *state, const void *table, void *extra);

void *func_0FBCC0(void) {
    if (!D_00206288) {
        func_0FACC8();
        func_0FBF00(&D_00206288, D_00131A70, D_00206280);
    }
    return &D_00206288;
}
