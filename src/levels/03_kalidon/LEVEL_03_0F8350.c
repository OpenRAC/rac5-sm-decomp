extern char D_000F7768[];
extern char D_000F75C8[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096750(void *out);

int func_0F8350(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode, D_000F7768, 56, 0, -1, D_000F75C8);
    return func_096750(local);
}
