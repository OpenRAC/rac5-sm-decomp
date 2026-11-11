extern char D_001A6038[];
extern char D_001A5EA8[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08C540(void *out);

void func_1A5DE8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode, D_001A6038, 60, 0, -1, D_001A5EA8);
    func_08C540(local);
}
