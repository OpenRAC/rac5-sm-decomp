extern char D_001E34D0[];
extern void func_096948(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_096B20(void *out);

void func_1E4190(void *arg) {
    char local[16];
    func_096948(local, arg, D_001E34D0, 36, 0, 6, 0);
    func_096B20(local);
}
