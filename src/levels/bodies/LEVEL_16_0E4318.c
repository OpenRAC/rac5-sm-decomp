extern char D_000E3730[];
extern char D_000E3590[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087708(void *out);

void func_0E4318(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode, D_000E3730, 56, 0, -1, D_000E3590);
    func_087708(local);
}
