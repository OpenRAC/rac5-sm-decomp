extern char D_001A9788[];
extern void func_09E868(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_09EA40(void *out);

void func_1AAB28(void *arg) {
    char local[16];
    func_09E868(local, arg, D_001A9788, 52, 0, -1, 0);
    func_09EA40(local);
}
