extern char D_0013EE30[];
extern char D_0013ECF0[];
extern void func_087F70(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_088148(void *out);

void func_140180(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087F70(local, mode | 1u, D_0013EE30, 48, 0, -1, D_0013ECF0);
    func_088148(local);
}
