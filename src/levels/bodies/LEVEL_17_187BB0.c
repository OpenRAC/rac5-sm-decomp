extern char D_00186EF0[];
extern void func_087F70(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_088148(void *out);

void func_187BB0(void *arg) {
    char local[16];
    func_087F70(local, arg, D_00186EF0, 36, 0, 6, 0);
    func_088148(local);
}
