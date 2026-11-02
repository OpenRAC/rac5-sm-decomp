extern char D_001B3BD0[];
extern void func_08F748(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_08F920(void *out);

void func_1B41A0(void *arg) {
    char local[16];
    func_08F748(local, arg, D_001B3BD0, 20, 0, 2, 0);
    func_08F920(local);
}
