extern char D_000EBD10[];
extern char D_000EBAB0[];
extern void func_087F70(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_088148(void *out);

int func_0EC910(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087F70(local, mode | 1u, D_000EBD10, 80, 0, -1, D_000EBAB0);
    return func_088148(local);
}
