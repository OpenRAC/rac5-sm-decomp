extern char D_001CFF08[];
extern void func_0930A0(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_093278(void *out);

int func_1D0C18(unsigned int id) {
    char local[16];
    func_0930A0(local, id, D_001CFF08, 40, 0, 6, 0);
    return func_093278(local);
}
