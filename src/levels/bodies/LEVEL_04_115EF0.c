/* LEVEL_04:0x115EF0 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_001152F0[];
extern char D_00115090[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_099C18(void *out);

int func_115EF0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode | 1u, D_001152F0, 80, 0, -1, D_00115090);
    return func_099C18(local);
}
