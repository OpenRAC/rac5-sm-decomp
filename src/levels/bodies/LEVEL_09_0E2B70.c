extern char D_000E2508[];
extern char D_000E23F8[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_093278(void *out);

int func_0E2B70(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode, D_000E2508, 44, 0, -1, D_000E23F8);
    return func_093278(local);
}
