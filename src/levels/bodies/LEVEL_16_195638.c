extern char D_00194900[];
extern void func_087530(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_087708(void *out);

int func_195638(int arg) {
    char local[16];
    func_087530(local, arg, D_00194900, 48, 0, 6, 0);
    return func_087708(local);
}
