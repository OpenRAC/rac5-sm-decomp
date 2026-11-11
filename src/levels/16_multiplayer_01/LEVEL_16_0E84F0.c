extern char D_000E7D70[];
extern char D_000E7C00[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087708(void *out);

int func_0E84F0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode, D_000E7D70, 48, 0, -1, D_000E7C00);
    return func_087708(local);
}
