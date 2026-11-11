extern int D_003EBC70;
extern char D_0027A558[];
extern char D_003EBC80[];
extern void func_235680(void);
extern void func_2368B8(void *state, const void *table, void *extra);

void *func_2355E8(void) {
    if (!D_003EBC70) {
        func_235680();
        func_2368B8(&D_003EBC70, D_0027A558, D_003EBC80);
    }
    return &D_003EBC70;
}
