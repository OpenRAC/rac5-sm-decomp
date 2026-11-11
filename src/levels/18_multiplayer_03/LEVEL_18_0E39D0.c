extern char D_000E2C58[];
extern char D_000E2AF8[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087050(void *out);

int func_0E39D0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode | 1u, D_000E2C58, 44, 0, -1, D_000E2AF8);
    return func_087050(local);
}
