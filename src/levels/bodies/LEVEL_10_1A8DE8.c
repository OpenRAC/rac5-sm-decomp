/* LEVEL_10:0x1A8DE8 -- merges a masked 16-bit value into a record field selected through a table. */

struct Tab68 {
    char pad000[0x64];
    char *p64;
};

struct Sub4 {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
};

extern struct Tab68 D_00238AF8[];

void func_1A8DE8(char *a0, unsigned int a1, unsigned int a2)
{
    char *p;
    char *x;
    unsigned int mask;
    unsigned int idx;
    struct Sub4 *s;

    mask = a1;
    p = *(char **)(a0 + 0x58);
    s = (struct Sub4 *)(p + 4);
    if (*(unsigned short *)(p + 4) == 0xFFFF) {
        return;
    }
    idx = s->b3;
    x = D_00238AF8[idx].p64 + ((*(unsigned short *)(p + 4)) << 4);
    *(unsigned short *)(x + 8) = (*(unsigned short *)(x + 8) & mask) | a2;
}
