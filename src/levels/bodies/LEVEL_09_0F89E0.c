extern char D_000F7C68[];
extern char D_000F7B08[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_093278(void *out);

void func_0F89E0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode | 1u, D_000F7C68, 44, 0, -1, D_000F7B08);
    func_093278(local);
}
