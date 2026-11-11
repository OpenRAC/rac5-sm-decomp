/* LEVEL_01:0x102680 -- placement copy of LEVEL_04_10C970.c. */
extern char D_00101AA8[];
extern char D_00101890[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096B20(void *out);

int func_102680(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode | 1u, D_00101AA8, 76, 0, -1, D_00101890);
    return func_096B20(local);
}
