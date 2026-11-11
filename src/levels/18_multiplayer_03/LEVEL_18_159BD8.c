/* LEVEL_18.REL @ 0x159BD8 — 56 octets, lwc1 */
typedef struct {
    char pad168[0x168];
    float f168;
    char pad16C[0x1E];
    unsigned char b18A;
} Inner;

typedef struct {
    char pad58[0x58];
    Inner *f58;
} Outer;

int func_159BD8(Outer *a0)
{
    Inner *p = a0->f58;
    int r = 0;

    if (p->b18A != 0) {
        if (150.0f < p->f168)
            r = 1;
    }
    return r;
}
