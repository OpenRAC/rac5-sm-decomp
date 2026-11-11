/* LEVEL_15:0x10E8E8 -- runs one setup helper, then steps a helper over a strided record range. */
extern char D_002EFDE8[];
extern void func_0804B0(char *a0);
extern void func_13B5B0(char *a0);
extern void func_11D5B0(char *a0);

void func_10E8E8(void)
{
    char *s0;
    char *s1;
    char *s2;

    s0 = D_002EFDE8;
    func_0804B0(s0);
    s2 = s0 + 0x558;
    s1 = s0 + 0xF8;
    func_13B5B0(s0 + 0xF0);
    do {
        func_11D5B0(s1);
        s1 += 0x118;
    } while (s1 < s2);
}
