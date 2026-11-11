/* LEVEL_09:0x105C98 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_00105098[];
extern char D_00104E38[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_093278(void *out);

int func_105C98(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode | 1u, D_00105098, 80, 0, -1, D_00104E38);
    return func_093278(local);
}
