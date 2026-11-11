/* LEVEL_01:0x16F098 -- walks 28-byte entries up to a fixed span; each non-null entry's node gets bit 5 and bit 6 set or cleared from two flag arguments. */

struct Node {
    unsigned char pad0[0x64];
    int w64;
};

void func_16F098(unsigned char *a0, int x, int y)
{
    unsigned char *p;
    unsigned char *end;
    struct Node *n;
    int f5;
    int f6;

    f5 = (x & 1) << 5;
    f6 = (y & 1) << 6;
    p = a0;
    end = a0 + 0x150;
    do {
        n = *(struct Node **)p;
        if (n != 0) {
            n->w64 = (n->w64 & -33) | f5;
            n = *(struct Node **)p;
            n->w64 = (n->w64 & -65) | f6;
        }
        p += 0x1C;
    } while (p < end);
}
