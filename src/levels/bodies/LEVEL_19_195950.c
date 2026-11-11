extern char D_00194C18[];
extern void func_0879E0(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_087BB8(void *out);

int func_195950(int arg) {
    char local[16];
    func_0879E0(local, arg, D_00194C18, 48, 0, 6, 0);
    return func_087BB8(local);
}
