extern char D_0019CEA0[];
extern void func_09D018(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_09D1F0(void *out);

void func_19E240(void *arg) {
    char local[16];
    func_09D018(local, arg, D_0019CEA0, 52, 0, -1, 0);
    func_09D1F0(local);
}
