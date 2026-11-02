extern char D_000E5B30[];
extern char D_000E59C0[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087050(void *out);

void func_0E62B0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode, D_000E5B30, 48, 0, -1, D_000E59C0);
    func_087050(local);
}
