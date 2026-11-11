extern char D_001FE908[];
extern void func_099A40(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_099C18(void *out);

int func_1FF0D0(int arg) {
    char local[16];
    func_099A40(local, arg, D_001FE908, 44, 0, 6, 0);
    return func_099C18(local);
}
