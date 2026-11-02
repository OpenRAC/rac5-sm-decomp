extern char D_001EA3F0[];
extern void func_096CB8(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_096E90(void *out);

void func_1EACA0(void *arg) {
    char local[16];
    func_096CB8(local, arg, D_001EA3F0, 32, 0, 2, 0);
    func_096E90(local);
}
