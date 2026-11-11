extern char D_0022A5F0[];
extern void func_09E868(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_09EA40(void *out);

int func_22ADB8(int arg) {
    char local[16];
    func_09E868(local, arg, D_0022A5F0, 44, 0, 6, 0);
    return func_09EA40(local);
}
