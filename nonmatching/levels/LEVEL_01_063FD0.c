/* USA LEVEL_01:063FD0, 204-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 204 bytes: 16 differing words; first difference +0x4. No matching credit.
 * Remaining issue: register allocation/schedule in the head (from 20 words): mode==2 ? 0x4100 :
 * 0x4000 test order and state-before-flags store give retail block structure; retail stores tmp
 * before loading the mode (o a3, ptr a1, 2 in a0, flags a2, mode v1), ours loads the mode first
 * (o t0, ptr a2, 2 in a1, flags a3, mode a0); 8 statement-order/pointer forms and an inline mask
 * predicate tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x063FD0 -- picks a state from input flags, then polls. */
typedef struct { char pad0[0x20]; int state; char pad1[0x20]; unsigned char flags; } S239158;
typedef struct { char pad0[0x24]; int mode; } SIn;
typedef struct { char pad0[0x14]; int a; unsigned b; } SSub;
extern SIn *D_001F3FAC;
extern S239158 D_00239158;
extern int func_06A8D0(SSub *o, int *p);

void func_063FD0(SSub *o)
{
    int tmp;
    unsigned f;
    SSub *p;

    p = (SSub *)((char *)o + 0xC0);
    tmp = p->a;
    f = p->b;
    if (D_001F3FAC->mode == 2 ? (f & 0x4100) : (f & 0x4000)) {
        D_00239158.state = 2;
    } else if (f & 0x8000) {
        D_00239158.state = 6;
    } else if (D_00239158.flags & 4) {
        D_00239158.state = 9;
        D_00239158.flags &= 0xFB;
    }
    if (func_06A8D0(o, &tmp))
        D_00239158.state = 0xC;
}
