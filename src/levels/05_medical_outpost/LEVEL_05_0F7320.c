extern char D_000F6748[];
extern char D_000F65B8[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_094218(void *out);

int func_0F7320(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode, D_000F6748, 56, 0, 2, D_000F65B8);
    return func_094218(local);
}
