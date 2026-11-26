/* LEVEL_21:0x0F1E10 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_015B9AC;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_0F1E10(void)
{
    unsigned int flags = *(unsigned int *)(D_015B9AC + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
