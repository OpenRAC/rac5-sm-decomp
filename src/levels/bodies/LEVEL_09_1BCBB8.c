extern char D_001BCE08[];
extern char D_001BCC78[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_093278(void *out);

void func_1BCBB8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode, D_001BCE08, 60, 0, -1, D_001BCC78);
    func_093278(local);
}
