extern char D_000EBDB8[];
extern char D_000EBC18[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08C540(void *out);

int func_0EC9A0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode, D_000EBDB8, 56, 0, -1, D_000EBC18);
    return func_08C540(local);
}
