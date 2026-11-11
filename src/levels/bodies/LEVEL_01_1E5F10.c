extern char D_001E5748[];
extern void func_096948(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_096B20(void *out);

int func_1E5F10(int arg) {
    char local[16];
    func_096948(local, arg, D_001E5748, 44, 0, 6, 0);
    return func_096B20(local);
}
