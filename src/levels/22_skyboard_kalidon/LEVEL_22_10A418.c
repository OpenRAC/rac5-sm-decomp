/* LEVEL_22:0x10A418 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_016602C;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_10A418(void)
{
    unsigned int flags = *(unsigned int *)(D_016602C + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
