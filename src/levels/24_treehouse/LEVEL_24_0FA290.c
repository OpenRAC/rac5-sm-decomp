/* LEVEL_24:0x0FA290 -- placement copy of LEVEL_04_10C970.c. */
extern char D_000F96B8[];
extern char D_000F94A0[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08F920(void *out);

int func_0FA290(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode | 1u, D_000F96B8, 76, 0, -1, D_000F94A0);
    return func_08F920(local);
}
