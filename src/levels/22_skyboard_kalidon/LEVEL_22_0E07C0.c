extern char D_000DFA48[];
extern char D_000DF8E8[];
extern void func_087718(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0878F0(void *out);

int func_0E07C0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087718(local, mode | 1u, D_000DFA48, 44, 0, -1, D_000DF8E8);
    return func_0878F0(local);
}
