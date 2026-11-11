extern char D_000EC440[];
extern char D_000EC280[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087050(void *out);

int func_0ECC18(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode | 1u, D_000EC440, 64, 0, -1, D_000EC280);
    return func_087050(local);
}
