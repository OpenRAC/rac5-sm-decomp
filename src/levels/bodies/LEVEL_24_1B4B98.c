extern char D_001B42E8[];
extern void func_08F748(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_08F920(void *out);

void func_1B4B98(void *arg) {
    char local[16];
    func_08F748(local, arg, D_001B42E8, 32, 0, 2, 0);
    func_08F920(local);
}
