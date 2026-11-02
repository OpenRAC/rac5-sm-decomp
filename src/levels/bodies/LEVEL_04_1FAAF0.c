extern char D_001FA520[];
extern void func_099A40(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_099C18(void *out);

void func_1FAAF0(void *arg) {
    char local[16];
    func_099A40(local, arg, D_001FA520, 20, 0, 2, 0);
    func_099C18(local);
}
