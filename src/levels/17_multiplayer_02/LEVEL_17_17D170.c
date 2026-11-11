extern char D_0017D3C0[];
extern char D_0017D230[];
extern void func_087F70(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_088148(void *out);

void func_17D170(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087F70(local, mode, D_0017D3C0, 60, 0, -1, D_0017D230);
    func_088148(local);
}
