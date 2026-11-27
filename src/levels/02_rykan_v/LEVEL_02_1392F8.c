/* LEVEL_02:0x1392F8 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_021C00C;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_1392F8(void)
{
    unsigned int flags = *(unsigned int *)(D_021C00C + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
