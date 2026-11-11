extern char D_000F9F48[];
extern char D_000F9DB8[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096E90(void *out);

int func_0FAB20(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode, D_000F9F48, 56, 0, 2, D_000F9DB8);
    return func_096E90(local);
}
