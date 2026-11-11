extern char D_001E60A0[];
extern void func_096948(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_096B20(void *out);

int func_1E6DB0(unsigned int id) {
    char local[16];
    func_096948(local, id, D_001E60A0, 40, 0, 6, 0);
    return func_096B20(local);
}
