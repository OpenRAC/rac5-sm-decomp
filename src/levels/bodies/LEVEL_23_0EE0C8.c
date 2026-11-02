extern char D_000ED4F0[];
extern char D_000ED360[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08C540(void *out);

void func_0EE0C8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode, D_000ED4F0, 56, 0, 2, D_000ED360);
    func_08C540(local);
}
