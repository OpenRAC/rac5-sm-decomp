extern char D_001FAD38[];
extern void func_09D018(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_09D1F0(void *out);

void func_1FBA48(void *arg) {
    char local[16];
    func_09D018(local, arg, D_001FAD38, 40, 0, 6, 0);
    func_09D1F0(local);
}
