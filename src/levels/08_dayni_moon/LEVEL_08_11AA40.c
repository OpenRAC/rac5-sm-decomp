/* LEVEL_08:0x11AA40 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_00119E40[];
extern char D_00119BE0[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_09EA40(void *out);

int func_11AA40(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode | 1u, D_00119E40, 80, 0, -1, D_00119BE0);
    return func_09EA40(local);
}
