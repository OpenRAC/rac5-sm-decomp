extern char D_00171DF8[];
extern void func_08C368(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_08C540(void *out);

void func_173198(void *arg) {
    char local[16];
    func_08C368(local, arg, D_00171DF8, 52, 0, -1, 0);
    func_08C540(local);
}
