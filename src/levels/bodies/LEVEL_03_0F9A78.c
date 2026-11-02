extern char D_000F8EA0[];
extern char D_000F8D10[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096750(void *out);

void func_0F9A78(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode, D_000F8EA0, 56, 0, 2, D_000F8D10);
    func_096750(local);
}
