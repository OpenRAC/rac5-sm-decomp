extern char D_00229740[];
extern void func_09E868(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_09EA40(void *out);

void func_22A040(void *arg) {
    char local[16];
    func_09E868(local, arg, D_00229740, 40, 0, 2, 0);
    func_09EA40(local);
}
