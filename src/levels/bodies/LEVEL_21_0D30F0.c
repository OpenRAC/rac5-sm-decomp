/* LEVEL_21:0x0D30F0 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_000D24F0[];
extern char D_000D2290[];
extern void func_07A808(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_07A9E0(void *out);

int func_0D30F0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_07A808(local, mode | 1u, D_000D24F0, 80, 0, -1, D_000D2290);
    return func_07A9E0(local);
}
