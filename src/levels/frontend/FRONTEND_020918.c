/* FRONTEND:0x020918 -- reports whether either of two flag bits of a record word is set. */
extern char *D_0032814;
static inline int has(unsigned int f, unsigned int m) { return (f & m) != 0; }
int func_020918(void)
{
    unsigned int flags = *(unsigned int *)(D_0032814 + 0x94);
    return (has(flags, 0x10000) | (flags & 0x20000)) != 0;
}
