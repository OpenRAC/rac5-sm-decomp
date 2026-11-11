extern char D_000F7B98[];
extern char D_000F7A28[];
extern void func_08F598(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08F770(void *out);

int func_0F8318(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F598(local, mode, D_000F7B98, 48, 0, -1, D_000F7A28);
    return func_08F770(local);
}
