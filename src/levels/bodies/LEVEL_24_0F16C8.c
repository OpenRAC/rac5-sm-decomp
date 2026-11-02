extern char D_000F0AE0[];
extern char D_000F0940[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08F920(void *out);

void func_0F16C8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode, D_000F0AE0, 56, 0, -1, D_000F0940);
    func_08F920(local);
}
