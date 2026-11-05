extern char D_000EABA8[];
extern char D_000EA948[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087050(void *out);

int func_0EB7A8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode | 1u, D_000EABA8, 80, 0, -1, D_000EA948);
    return func_087050(local);
}
