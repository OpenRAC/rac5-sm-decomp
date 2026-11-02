extern char D_00225B28[];
extern void func_09E868(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_09EA40(void *out);

void func_2260F8(void *arg) {
    char local[16];
    func_09E868(local, arg, D_00225B28, 20, 0, 2, 0);
    func_09EA40(local);
}
