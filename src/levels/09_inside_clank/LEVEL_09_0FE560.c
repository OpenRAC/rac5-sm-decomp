/* LEVEL_09:0x0FE560 -- placement copy of LEVEL_04_10C970.c. */
extern char D_000FD988[];
extern char D_000FD770[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_093278(void *out);

int func_0FE560(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode | 1u, D_000FD988, 76, 0, -1, D_000FD770);
    return func_093278(local);
}
