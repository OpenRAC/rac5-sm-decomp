extern char D_001D6680[];
extern void func_094040(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_094218(void *out);

void func_1D6F40(void *arg) {
    char local[16];
    func_094040(local, arg, D_001D6680, 32, 0, 2, 0);
    func_094218(local);
}
