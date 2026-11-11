extern char D_001CCC90[];
extern void func_0930A0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_093278(void *out);

void func_1CD9C8(void *arg) {
    char local[16];
    func_0930A0(local, arg, D_001CCC90, 48, 0, 6, 0);
    func_093278(local);
}
