extern int D_003EBCA8;
extern char D_0027A768[];
extern char D_003EBCC8[];
extern void func_236EB0(void);
extern void func_2368B8(void *state, const void *table, void *extra);

void *func_236CD0(void) {
    if (!D_003EBCA8) {
        func_236EB0();
        func_2368B8(&D_003EBCA8, D_0027A768, D_003EBCC8);
    }
    return &D_003EBCA8;
}
