extern char D_001F8168[];
extern void func_09D018(unsigned int *out, unsigned int arg, unsigned int data,
                        int size, int first, int second, unsigned int third);
extern int func_09D1F0(unsigned int *out);

int func_1F8E28(unsigned int arg) {
    unsigned int local[4];
    func_09D018(local, arg, (unsigned int)D_001F8168, 36, 0, 6, 0);
    return func_09D1F0(local);
}
