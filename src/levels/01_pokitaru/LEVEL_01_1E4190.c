extern char D_001E34D0[];
extern void func_096948(unsigned int *out, unsigned int arg, unsigned int data,
                        int size, int first, int second, unsigned int third);
extern int func_096B20(unsigned int *out);

int func_1E4190(unsigned int arg) {
    unsigned int local[4];
    func_096948(local, arg, (unsigned int)D_001E34D0, 36, 0, 6, 0);
    return func_096B20(local);
}
