extern char D_00178888[];
extern void func_094040(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_094218(void *out);

void func_179C28(void *arg) {
    char local[16];
    func_094040(local, arg, D_00178888, 52, 0, -1, 0);
    func_094218(local);
}
