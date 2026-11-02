extern char D_0017A9A0[];
extern void func_0930A0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_093278(void *out);

void func_17BD40(void *arg) {
    char local[16];
    func_0930A0(local, arg, D_0017A9A0, 52, 0, -1, 0);
    func_093278(local);
}
