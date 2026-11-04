/* Candidate for LEVEL_15.REL:0x002F40.
 * Replaces the low three bits of an object flag word, preserving other bits.
 */
typedef unsigned long long u64;
typedef struct {
    unsigned char pad[0x40];
    u64 flags;
} State;
typedef struct { State *p; } StateHolder;

extern StateHolder D_00143EBC;

void func_002F40(u64 first, u64 second, u64 third)
{
    D_00143EBC.p->flags = (D_00143EBC.p->flags & ~1ULL) | (first & 1ULL);
    D_00143EBC.p->flags = (D_00143EBC.p->flags & ~2ULL) | ((second & 1ULL) << 1);
    D_00143EBC.p->flags = (D_00143EBC.p->flags & ~4ULL) | ((third & 1ULL) << 2);
}
