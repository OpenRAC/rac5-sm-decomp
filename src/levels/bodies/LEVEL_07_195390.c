extern char D_00193FF0[];
extern void func_0987D0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_0989A8(void *out);

void func_195390(void *arg) {
    char local[16];
    func_0987D0(local, arg, D_00193FF0, 52, 0, -1, 0);
    func_0989A8(local);
}
