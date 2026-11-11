/* LEVEL_02:0x108830 -- placement copy of LEVEL_04_10C970.c. */
extern char D_00107C58[];
extern char D_00107A40[];
extern void func_09D018(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_09D1F0(void *out);

int func_108830(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09D018(local, mode | 1u, D_00107C58, 76, 0, -1, D_00107A40);
    return func_09D1F0(local);
}
