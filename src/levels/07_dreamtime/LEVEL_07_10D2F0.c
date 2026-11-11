/* LEVEL_07:0x10D2F0 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_0010C6F0[];
extern char D_0010C490[];
extern void func_0987D0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0989A8(void *out);

int func_10D2F0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0987D0(local, mode | 1u, D_0010C6F0, 80, 0, -1, D_0010C490);
    return func_0989A8(local);
}
