extern char D_000E3DC0[];
extern char D_000E3C60[];
extern void func_087F70(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_088148(void *out);

int func_0E4B38(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087F70(local, mode | 1u, D_000E3DC0, 44, 0, -1, D_000E3C60);
    return func_088148(local);
}
