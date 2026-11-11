extern char D_001CBC38[];
extern void func_0930A0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_093278(void *out);

void func_1CC8F8(void *arg) {
    char local[16];
    func_0930A0(local, arg, D_001CBC38, 36, 0, 6, 0);
    func_093278(local);
}
