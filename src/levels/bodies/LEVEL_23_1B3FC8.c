extern char D_001B3800[];
extern void func_08C368(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_08C540(void *out);

void func_1B3FC8(void *arg) {
    char local[16];
    func_08C368(local, arg, D_001B3800, 44, 0, 6, 0);
    func_08C540(local);
}
