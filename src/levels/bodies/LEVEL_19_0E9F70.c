/* LEVEL_19:0x0E9F70 -- placement copy of LEVEL_04_10C970.c. */
extern char D_000E9398[];
extern char D_000E9180[];
extern void func_0879E0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087BB8(void *out);

int func_0E9F70(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0879E0(local, mode | 1u, D_000E9398, 76, 0, -1, D_000E9180);
    return func_087BB8(local);
}
