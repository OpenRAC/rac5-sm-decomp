extern char D_001083B0[];
extern char D_00108200[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_099C18(void *out);

void func_109210(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode | 1u, D_001083B0, 52, 0, -1, D_00108200);
    func_099C18(local);
}
