extern char D_000E20C8[];
extern char D_000E1F58[];
extern void func_087718(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_0878F0(void *out);

void func_0E2848(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087718(local, mode, D_000E20C8, 48, 0, -1, D_000E1F58);
    func_0878F0(local);
}
