extern char D_001B6420[];
extern void func_08F748(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_08F920(void *out);

int func_1B6BE8(int arg) {
    char local[16];
    func_08F748(local, arg, D_001B6420, 44, 0, 6, 0);
    return func_08F920(local);
}
