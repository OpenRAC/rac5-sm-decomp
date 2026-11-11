extern char D_001FC6C8[];
extern void func_099A40(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_099C18(void *out);

int func_1FD400(int arg) {
    char local[16];
    func_099A40(local, arg, D_001FC6C8, 48, 0, 6, 0);
    return func_099C18(local);
}
