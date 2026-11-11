extern char D_00227CD0[];
extern void func_09E868(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_09EA40(void *out);

int func_228A08(int arg) {
    char local[16];
    func_09E868(local, arg, D_00227CD0, 48, 0, 6, 0);
    return func_09EA40(local);
}
