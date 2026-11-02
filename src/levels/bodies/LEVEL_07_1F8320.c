extern char D_001F7B48[];
extern void func_0987D0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_0989A8(void *out);

void func_1F8320(void *arg) {
    char local[16];
    func_0987D0(local, arg, D_001F7B48, 44, 0, 2, 0);
    func_0989A8(local);
}
