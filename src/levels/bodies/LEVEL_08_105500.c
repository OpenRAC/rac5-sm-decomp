extern char D_00104918[];
extern char D_00104778[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09EA40(void *out);

void func_105500(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode, D_00104918, 56, 0, -1, D_00104778);
    func_09EA40(local);
}
