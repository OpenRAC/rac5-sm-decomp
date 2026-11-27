/* LEVEL_05:0x12E8C0 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_01F60CC;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_12E8C0(void)
{
    unsigned int flags = *(unsigned int *)(D_01F60CC + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
