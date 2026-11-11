extern char D_000E5170[];
extern char D_000E50A8[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087050(void *out);

int func_0E5858(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode, D_000E5170, 16, 0, -1, D_000E50A8);
    return func_087050(local);
}
