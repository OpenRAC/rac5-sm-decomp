/* Candidate for LEVEL_03.REL:0x003410.
 * Replaces the low three bits of an object flag word, preserving other bits.
 */
typedef unsigned long long u64;
typedef struct {
    unsigned char pad[0x40];
    u64 flags;
} State;
typedef struct { State *p; } StateHolder;

extern StateHolder D_002078D4;

void func_003410(u64 first, u64 second, u64 third)
{
    D_002078D4.p->flags = (D_002078D4.p->flags & ~1ULL) | (first & 1ULL);
    D_002078D4.p->flags = (D_002078D4.p->flags & ~2ULL) | ((second & 1ULL) << 1);
    D_002078D4.p->flags = (D_002078D4.p->flags & ~4ULL) | ((third & 1ULL) << 2);
}
