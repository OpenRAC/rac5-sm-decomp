extern char D_001D4B40[];
extern void func_094040(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_094218(void *out);

int func_1D5308(int arg) {
    char local[16];
    func_094040(local, arg, D_001D4B40, 44, 0, 6, 0);
    return func_094218(local);
}
