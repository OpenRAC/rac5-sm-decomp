extern char D_001EB688[];
extern char D_001EB4F8[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_099C18(void *out);

void func_1EB438(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode, D_001EB688, 60, 0, -1, D_001EB4F8);
    func_099C18(local);
}
