/* Candidate for LEVEL_04.REL:0x0031F0.
 * Replaces the low three bits of an object flag word, preserving other bits.
 */
typedef unsigned long long u64;
typedef struct {
    unsigned char pad[0x40];
    u64 flags;
} State;
typedef struct { State *p; } StateHolder;

extern StateHolder D_002083D4;

void func_0031F0(int first, int second, int third)
{
    D_002083D4.p->flags = (D_002083D4.p->flags & ~1ULL) | (first & 1ULL);
    D_002083D4.p->flags = (D_002083D4.p->flags & ~2ULL) | ((second & 1ULL) << 1);
    D_002083D4.p->flags = (D_002083D4.p->flags & ~4ULL) | ((third & 1ULL) << 2);
}
