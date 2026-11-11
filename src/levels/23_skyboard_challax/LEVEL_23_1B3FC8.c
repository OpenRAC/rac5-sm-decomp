extern char D_001B3800[];
extern void func_08C368(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_08C540(void *out);

int func_1B3FC8(int arg) {
    char local[16];
    func_08C368(local, arg, D_001B3800, 44, 0, 6, 0);
    return func_08C540(local);
}
