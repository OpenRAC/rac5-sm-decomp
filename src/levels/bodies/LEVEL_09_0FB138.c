extern char D_000FA9B8[];
extern char D_000FA848[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_093278(void *out);

void func_0FB138(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode, D_000FA9B8, 48, 0, -1, D_000FA848);
    func_093278(local);
}
