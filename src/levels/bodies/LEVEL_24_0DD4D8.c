extern char D_000DCE70[];
extern char D_000DCD60[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08F920(void *out);

void func_0DD4D8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode, D_000DCE70, 44, 0, -1, D_000DCD60);
    func_08F920(local);
}
