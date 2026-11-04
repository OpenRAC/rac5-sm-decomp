/* Candidate for LEVEL_19.REL:0x002FE0.
 * Replaces the low three bits of an object flag word, preserving other bits.
 */
typedef unsigned long long u64;
typedef struct {
    unsigned char pad[0x40];
    u64 flags;
} State;
typedef struct { State *p; } StateHolder;

extern StateHolder D_0019BE5C;

void func_002FE0(u64 first, u64 second, u64 third)
{
    D_0019BE5C.p->flags = (D_0019BE5C.p->flags & ~1ULL) | (first & 1ULL);
    D_0019BE5C.p->flags = (D_0019BE5C.p->flags & ~2ULL) | ((second & 1ULL) << 1);
    D_0019BE5C.p->flags = (D_0019BE5C.p->flags & ~4ULL) | ((third & 1ULL) << 2);
}
