extern char D_0010DC58[];
extern char D_0010D9F8[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_099C18(void *out);

void func_10E870(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode | 1u, D_0010DC58, 72, 0, -1, D_0010D9F8);
    func_099C18(local);
}
