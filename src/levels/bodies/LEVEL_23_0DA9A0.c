extern char D_000DA338[];
extern char D_000DA228[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08C540(void *out);

int func_0DA9A0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode, D_000DA338, 44, 0, -1, D_000DA228);
    return func_08C540(local);
}
