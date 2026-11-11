/* LEVEL_10:0x10AAC0 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_00109EC0[];
extern char D_00109C60[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096E90(void *out);

int func_10AAC0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode | 1u, D_00109EC0, 80, 0, -1, D_00109C60);
    return func_096E90(local);
}
