extern char D_001FB670[];
extern void func_099A40(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_099C18(void *out);

void func_1FC330(void *arg) {
    char local[16];
    func_099A40(local, arg, D_001FB670, 36, 0, 6, 0);
    func_099C18(local);
}
