/* LEVEL_15:0x106880 -- calls one helper on a base object, one on a field, then a helper on each strided record. */
extern char D_002ED948[];
extern void func_0804B0(char *p);
extern void func_13B5B0(char *p);
extern void func_11D5B0(char *p);

void func_106880(void)
{
    char *base;
    char *p;
    char *end;

    base = D_002ED948;
    func_0804B0(base);
    end = base + 0xAD4;
    func_13B5B0(base + 0xF0);
    p = base + 0xFC;
    do {
        func_11D5B0(p);
        p += 0x118;
    } while (p < end);
}
