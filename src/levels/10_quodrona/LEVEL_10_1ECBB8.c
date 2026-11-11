extern char D_001EBE80[];
extern void func_096CB8(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_096E90(void *out);

int func_1ECBB8(int arg) {
    char local[16];
    func_096CB8(local, arg, D_001EBE80, 48, 0, 6, 0);
    return func_096E90(local);
}
