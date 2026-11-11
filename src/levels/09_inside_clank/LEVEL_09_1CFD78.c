extern char D_001CF5B0[];
extern void func_0930A0(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_093278(void *out);

int func_1CFD78(int arg) {
    char local[16];
    func_0930A0(local, arg, D_001CF5B0, 44, 0, 6, 0);
    return func_093278(local);
}
