extern char D_000ECDE8[];
extern char D_000ECB88[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087708(void *out);

int func_0ED9E8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode | 1u, D_000ECDE8, 80, 0, -1, D_000ECB88);
    return func_087708(local);
}
