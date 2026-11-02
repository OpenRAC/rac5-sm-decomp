extern char D_001C3A98[];
extern char D_001C3908[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_094218(void *out);

void func_1C3848(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode, D_001C3A98, 60, 0, -1, D_001C3908);
    func_094218(local);
}
