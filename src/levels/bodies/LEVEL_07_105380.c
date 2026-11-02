extern char D_00104768[];
extern char D_00104508[];
extern void func_0987D0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_0989A8(void *out);

void func_105380(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0987D0(local, mode | 1u, D_00104768, 72, 0, -1, D_00104508);
    func_0989A8(local);
}
