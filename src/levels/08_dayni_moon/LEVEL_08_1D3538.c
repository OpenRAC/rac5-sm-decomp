/* LEVEL_08:0x1D3538 -- placement copy of LEVEL_01_1A0E80.c: copies the inverted low bit of the argument into bit 5 of the flags of five linked records. */
struct Flags_1A0E80 {
    char pad_00[0x64];
    int flags;
};

struct Block_1A0E80 {
    char pad_000[0x5A0];
    struct Flags_1A0E80 *r5A0;
    char pad_5A4[8];
    struct Flags_1A0E80 *r5AC;
    char pad_5B0[0x28];
    struct Flags_1A0E80 *r5D8;
    struct Flags_1A0E80 *r5DC;
    char pad_5E0[4];
    struct Flags_1A0E80 *r5E4;
};

extern struct Block_1A0E80 D_002843D0;

void func_1D3538(int on)
{
    struct Block_1A0E80 *b = &D_002843D0;
    int v = on ^ 1;

    if (b->r5A0 != 0) {
        { int bit = (v & 1) << 5; b->r5A0->flags = (b->r5A0->flags & ~0x20) | bit; }
    }
    if (b->r5AC != 0) {
        { int bit = (v & 1) << 5; b->r5AC->flags = (b->r5AC->flags & ~0x20) | bit; }
    }
    if (b->r5D8 != 0) {
        { int bit = (v & 1) << 5; b->r5D8->flags = (b->r5D8->flags & ~0x20) | bit; }
    }
    if (b->r5DC != 0) {
        { int bit = (v & 1) << 5; b->r5DC->flags = (b->r5DC->flags & ~0x20) | bit; }
    }
    if (b->r5E4 != 0) {
        { int bit = (v & 1) << 5; b->r5E4->flags = (b->r5E4->flags & ~0x20) | bit; }
    }
}
