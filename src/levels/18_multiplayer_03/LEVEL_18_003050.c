/* Candidate for LEVEL_18.REL:0x003050.
 * Replaces the low three bits of an object flag word, preserving other bits.
 */
typedef unsigned long long u64;
typedef struct {
    unsigned char pad[0x40];
    u64 flags;
} State;
typedef struct { State *p; } StateHolder;

extern StateHolder D_0019C15C;

void func_003050(int first, int second, int third)
{
    D_0019C15C.p->flags = (D_0019C15C.p->flags & ~1ULL) | (first & 1ULL);
    D_0019C15C.p->flags = (D_0019C15C.p->flags & ~2ULL) | ((second & 1ULL) << 1);
    D_0019C15C.p->flags = (D_0019C15C.p->flags & ~4ULL) | ((third & 1ULL) << 2);
}
