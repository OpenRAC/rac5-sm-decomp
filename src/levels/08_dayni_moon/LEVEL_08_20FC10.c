/* LEVEL_08:0x20FC10 -- placement copy of LEVEL_08_20FB90.c: calls a helper for each 32-byte record in a span given by a header pair. */
struct S20FB90 {
    char *f00;
    int f04;
};

extern void func_20FB58(char *rec);

void func_20FC10(struct S20FB90 *a)
{
    char *p;
    char *end;

    p = a->f00;
    end = p + (a->f04 << 5);
    while (p != end) {
        func_20FB58(p);
        p += 0x20;
    }
}
