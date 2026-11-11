extern char D_002159F8[];
extern char D_00215868[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09EA40(void *out);

void func_2157A8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode, D_002159F8, 60, 0, -1, D_00215868);
    func_09EA40(local);
}
