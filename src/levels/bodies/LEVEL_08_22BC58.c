extern char D_0022AF48[];
extern void func_09E868(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_09EA40(void *out);

void func_22BC58(void *arg) {
    char local[16];
    func_09E868(local, arg, D_0022AF48, 40, 0, 6, 0);
    func_09EA40(local);
}
