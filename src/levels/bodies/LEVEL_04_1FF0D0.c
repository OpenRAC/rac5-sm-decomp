extern char D_001FE908[];
extern void func_099A40(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_099C18(void *out);

void func_1FF0D0(void *arg) {
    char local[16];
    func_099A40(local, arg, D_001FE908, 44, 0, 6, 0);
    func_099C18(local);
}
