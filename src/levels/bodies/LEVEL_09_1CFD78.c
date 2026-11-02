extern char D_001CF5B0[];
extern void func_0930A0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_093278(void *out);

void func_1CFD78(void *arg) {
    char local[16];
    func_0930A0(local, arg, D_001CF5B0, 44, 0, 6, 0);
    func_093278(local);
}
