extern char D_001CCC90[];
extern void func_0930A0(unsigned int *out, unsigned int arg, unsigned int data,
                        int size, int first, int second, unsigned int third);
extern int func_093278(unsigned int *out);

int func_1CD9C8(unsigned int arg) {
    unsigned int local[4];
    func_0930A0(local, arg, (unsigned int)D_001CCC90, 48, 0, 6, 0);
    return func_093278(local);
}
