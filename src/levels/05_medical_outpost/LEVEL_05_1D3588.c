extern char D_001D28C8[];
extern void func_094040(unsigned int *out, unsigned int arg, unsigned int data,
                        int size, int first, int second, unsigned int third);
extern int func_094218(unsigned int *out);

int func_1D3588(unsigned int arg) {
    unsigned int local[4];
    func_094040(local, arg, (unsigned int)D_001D28C8, 36, 0, 6, 0);
    return func_094218(local);
}
