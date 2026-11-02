extern char D_000E2658[];
extern char D_000E24B8[];
extern void func_087F70(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_088148(void *out);

void func_0E3240(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087F70(local, mode, D_000E2658, 56, 0, -1, D_000E24B8);
    func_088148(local);
}
