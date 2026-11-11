extern char D_001D28C8[];
extern void func_094040(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_094218(void *out);

void func_1D3588(void *arg) {
    char local[16];
    func_094040(local, arg, D_001D28C8, 36, 0, 6, 0);
    func_094218(local);
}
