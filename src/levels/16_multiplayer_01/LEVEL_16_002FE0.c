/* Candidate for LEVEL_16.REL:0x002FE0.
 * Replaces the low three bits of an object flag word, preserving other bits.
 */
typedef unsigned long long u64;
typedef struct {
    unsigned char pad[0x40];
    u64 flags;
} State;
typedef struct { State *p; } StateHolder;

extern StateHolder D_0019ACDC;

void func_002FE0(int first, int second, int third)
{
    D_0019ACDC.p->flags = (D_0019ACDC.p->flags & ~1ULL) | (first & 1ULL);
    D_0019ACDC.p->flags = (D_0019ACDC.p->flags & ~2ULL) | ((second & 1ULL) << 1);
    D_0019ACDC.p->flags = (D_0019ACDC.p->flags & ~4ULL) | ((third & 1ULL) << 2);
}
