extern char D_001F7730[];
extern void func_09D018(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_09D1F0(void *out);

void func_1F7FE0(void *arg) {
    char local[16];
    func_09D018(local, arg, D_001F7730, 32, 0, 2, 0);
    func_09D1F0(local);
}
