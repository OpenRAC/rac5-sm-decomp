/* LEVEL_10:0x101FC0 -- placement copy of LEVEL_04_10C970.c. */
extern char D_001013E8[];
extern char D_001011D0[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096E90(void *out);

int func_101FC0(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode | 1u, D_001013E8, 76, 0, -1, D_001011D0);
    return func_096E90(local);
}
