extern char D_000D4490[];
extern char D_000D4380[];
extern void func_087F70(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_088148(void *out);

void func_0D4AF8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087F70(local, mode, D_000D4490, 44, 0, -1, D_000D4380);
    func_088148(local);
}
