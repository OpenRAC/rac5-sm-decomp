extern char D_000CE768[];
extern char D_000CE5F8[];
extern void func_07A808(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_07A9E0(void *out);

int func_0CEEE8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_07A808(local, mode, D_000CE768, 48, 0, -1, D_000CE5F8);
    return func_07A9E0(local);
}
