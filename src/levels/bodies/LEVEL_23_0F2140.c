extern char D_000F19C0[];
extern char D_000F1850[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08C540(void *out);

void func_0F2140(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode, D_000F19C0, 48, 0, -1, D_000F1850);
    func_08C540(local);
}
