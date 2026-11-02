extern char D_001C1EE8[];
extern char D_001C1D58[];
extern void func_08F598(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08F770(void *out);

void func_1C1C98(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F598(local, mode, D_001C1EE8, 60, 0, -1, D_001C1D58);
    func_08F770(local);
}
