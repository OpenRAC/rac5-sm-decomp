/* Candidate for LEVEL_22.REL:0x003158.
 * Replaces the low three bits of an object flag word, preserving other bits.
 */
typedef unsigned long long u64;
typedef struct {
    unsigned char pad[0x40];
    u64 flags;
} State;
typedef struct { State *p; } StateHolder;

extern StateHolder D_0014E5D4;

void func_003158(u64 first, u64 second, u64 third)
{
    D_0014E5D4.p->flags = (D_0014E5D4.p->flags & ~1ULL) | (first & 1ULL);
    D_0014E5D4.p->flags = (D_0014E5D4.p->flags & ~2ULL) | ((second & 1ULL) << 1);
    D_0014E5D4.p->flags = (D_0014E5D4.p->flags & ~4ULL) | ((third & 1ULL) << 2);
}
