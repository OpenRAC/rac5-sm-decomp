/* LEVEL_07:0x135F48 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_021B34C;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_135F48(void)
{
    unsigned int flags = *(unsigned int *)(D_021B34C + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
