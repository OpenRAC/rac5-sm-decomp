/* LEVEL_24:0x128A48 -- placement copy of FRONTEND_020918.c: reports whether either of two flag bits of a record word is set. */
extern char *D_01D7CCC;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_128A48(void)
{
    unsigned int flags = *(unsigned int *)(D_01D7CCC + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
