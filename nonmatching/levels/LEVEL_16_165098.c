/* USA LEVEL_16.REL:0x165098 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0E9D90 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct { char padCC_[0xCC]; int fCC; char padD0[0x1B8]; int f288; int f28C; } Cfg;
extern Cfg D_0024E240;
extern int D_002E5494;
extern int D_002E5498;
extern int D_002E549C;
extern int func_0E9D90(unsigned int value);
extern int func_165CF0(int a, int b, int c, int d, int e, int f);

void func_165098(void)
{
    D_002E5494 = func_0E9D90((D_0024E240.fCC << 16) | 0xC0001041u);
    D_002E5498 = func_165CF0(0x10, D_0024E240.f28C, 0, 0, 0, 1);
    D_002E549C = func_165CF0(0x10, D_0024E240.f288, 0, 0, 0, 1);
}
