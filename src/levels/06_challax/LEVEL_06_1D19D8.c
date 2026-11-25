extern char D_001D0D18[];
extern void func_08F598(unsigned int *out, unsigned int arg, unsigned int data,
                        int size, int first, int second, unsigned int third);
extern int func_08F770(unsigned int *out);

int func_1D19D8(unsigned int arg) {
    unsigned int local[4];
    func_08F598(local, arg, (unsigned int)D_001D0D18, 36, 0, 6, 0);
    return func_08F770(local);
}
