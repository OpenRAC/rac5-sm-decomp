extern char D_00186F10[];
extern void func_096948(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_096B20(void *out);

void func_1882B0(void *arg) {
    char local[16];
    func_096948(local, arg, D_00186F10, 52, 0, -1, 0);
    func_096B20(local);
}
