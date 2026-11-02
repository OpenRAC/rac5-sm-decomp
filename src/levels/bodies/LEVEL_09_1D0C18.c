extern char D_001CFF08[];
extern void func_0930A0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_093278(void *out);

void func_1D0C18(void *arg) {
    char local[16];
    func_0930A0(local, arg, D_001CFF08, 40, 0, 6, 0);
    func_093278(local);
}
