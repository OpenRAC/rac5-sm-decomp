extern char D_000F1F90[];
extern char D_000F1DF0[];
extern void func_08F598(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08F770(void *out);

void func_0F2B78(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F598(local, mode, D_000F1F90, 56, 0, -1, D_000F1DF0);
    func_08F770(local);
}
