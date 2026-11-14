/* USA LEVEL_19.REL:0x1484B0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0E8B20 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct { char pad0[8]; int a; char pad1[0xA4]; int b; } Rec;
extern int func_0E8B20(unsigned int);
extern int func_0D20E8(unsigned int);
extern int func_107538(unsigned int);
extern int D_002E526C;
extern int D_002E5268;
extern int D_001BEB58;
extern Rec D_0024E3C0;

void func_1484B0(void)
{
    D_002E526C = func_0E8B20((D_0024E3C0.b << 16) | 0x80007041U);
    D_002E5268 = func_0D20E8((D_0024E3C0.a << 16) | 0x80007041U);
    D_001BEB58 = func_107538(0x8FB84EB2);
}
