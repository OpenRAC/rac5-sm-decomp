extern char D_001F4EA0[];
extern void func_0987D0(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_0989A8(void *out);

int func_1F5BD8(int arg) {
    char local[16];
    func_0987D0(local, arg, D_001F4EA0, 48, 0, 6, 0);
    return func_0989A8(local);
}
