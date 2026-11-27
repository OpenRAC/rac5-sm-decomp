/* LEVEL_08:0x144480 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_024FF0C;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_144480(void)
{
    unsigned int flags = *(unsigned int *)(D_024FF0C + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
