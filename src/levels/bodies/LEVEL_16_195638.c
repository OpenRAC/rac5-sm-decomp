extern char D_00194900[];
extern void func_087530(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_087708(void *out);

void func_195638(void *arg) {
    char local[16];
    func_087530(local, arg, D_00194900, 48, 0, 6, 0);
    func_087708(local);
}
