extern char D_0016BF40[];
extern void func_08F748(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_08F920(void *out);

void func_16D2E0(void *arg) {
    char local[16];
    func_08F748(local, arg, D_0016BF40, 52, 0, -1, 0);
    func_08F920(local);
}
