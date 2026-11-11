/* LEVEL_18:0x155C18 -- calls a helper for each 128-byte record in a span given by a header pair. */
struct S155C18 {
    char pad00[0xC];
    char *f0C;
    char pad10[0x20];
    int f30;
};

extern void func_155AA0(char *rec);

void func_155C18(struct S155C18 *a)
{
    char *p;
    char *end;

    p = a->f0C;
    end = p + (a->f30 << 7);
    while (p != end) {
        func_155AA0(p);
        p += 0x80;
    }
}
