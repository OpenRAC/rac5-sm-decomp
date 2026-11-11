extern char D_001924B0[];
extern void func_099A40(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_099C18(void *out);

void func_193850(void *arg) {
    char local[16];
    func_099A40(local, arg, D_001924B0, 52, 0, -1, 0);
    func_099C18(local);
}
