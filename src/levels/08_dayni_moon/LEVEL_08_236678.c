extern int D_003EBC88;
extern char D_0027A680[];
extern char D_003EBC80[];
extern void func_235680(void);
extern void func_2368B8(void *state, const void *table, void *extra);

void *func_236678(void) {
    if (!D_003EBC88) {
        func_235680();
        func_2368B8(&D_003EBC88, D_0027A680, D_003EBC80);
    }
    return &D_003EBC88;
}
