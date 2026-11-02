extern char D_00193BC0[];
extern void func_0879E0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_087BB8(void *out);

void func_194880(void *arg) {
    char local[16];
    func_0879E0(local, arg, D_00193BC0, 36, 0, 6, 0);
    func_087BB8(local);
}
