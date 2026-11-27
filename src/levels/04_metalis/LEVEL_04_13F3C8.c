/* LEVEL_04:0x13F3C8 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_022046C;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_13F3C8(void)
{
    unsigned int flags = *(unsigned int *)(D_022046C + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
