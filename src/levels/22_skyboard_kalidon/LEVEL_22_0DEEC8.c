extern char D_000DE2E0[];
extern char D_000DE140[];
extern void func_087718(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0878F0(void *out);

int func_0DEEC8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087718(local, mode, D_000DE2E0, 56, 0, -1, D_000DE140);
    return func_0878F0(local);
}
