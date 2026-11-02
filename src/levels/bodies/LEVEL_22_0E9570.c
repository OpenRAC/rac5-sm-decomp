extern char D_000E8D98[];
extern char D_000E8BD8[];
extern void func_087718(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_0878F0(void *out);

void func_0E9570(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_087718(local, mode | 1u, D_000E8D98, 64, 0, -1, D_000E8BD8);
    func_0878F0(local);
}
