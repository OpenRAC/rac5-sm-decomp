extern char D_000E5908[];
extern char D_000E57F8[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096750(void *out);

int func_0E5F70(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode, D_000E5908, 44, 0, -1, D_000E57F8);
    return func_096750(local);
}
