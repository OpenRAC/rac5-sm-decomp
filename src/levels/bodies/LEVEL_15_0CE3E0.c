extern char D_000CDC48[];
extern char D_000CDB20[];
extern void func_07A808(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_07A9E0(void *out);

int func_0CE3E0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_07A808(local, mode | 1u, D_000CDC48, 56, 0, -1, D_000CDB20);
    return func_07A9E0(local);
}
