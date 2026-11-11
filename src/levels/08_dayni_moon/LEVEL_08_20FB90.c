/* LEVEL_08:0x20FB90 -- calls a helper for each 32-byte record in a span given by a header pair. */
struct S20FB90 {
    char *f00;
    int f04;
};

extern void func_20FA38(char *rec);

void func_20FB90(struct S20FB90 *a)
{
    char *p;
    char *end;

    p = a->f00;
    end = p + (a->f04 << 5);
    while (p != end) {
        func_20FA38(p);
        p += 0x20;
    }
}
