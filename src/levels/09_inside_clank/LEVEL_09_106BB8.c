extern char D_001063E0[];
extern char D_00106220[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_093278(void *out);

void func_106BB8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode | 1u, D_001063E0, 64, 0, -1, D_00106220);
    func_093278(local);
}
