extern char D_000F64E8[];
extern char D_000F6358[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_093278(void *out);

void func_0F70C0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode, D_000F64E8, 56, 0, 2, D_000F6358);
    func_093278(local);
}
