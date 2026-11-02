extern char D_00195E38[];
extern void func_0879E0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_087BB8(void *out);

void func_196738(void *arg) {
    char local[16];
    func_0879E0(local, arg, D_00195E38, 40, 0, 2, 0);
    func_087BB8(local);
}
