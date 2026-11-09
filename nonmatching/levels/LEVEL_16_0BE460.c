/* LEVEL_16.REL:0x0BE460: reviewed 96-byte candidate, held for ABI review.
 * Two lookups, stores one result, calls two helpers, then runs the screen-
 * effect save and disable hooks.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It declares func_0956C0 returning int with (int), but the accepted
 * FRONTEND_0025B0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_0956C0(int a);
void func_0BE530(void);
void func_110B48(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001B0CC0;
extern unsigned char D_001C9278[];

void func_0BE460(void)
{
    int s0;

    s0 = func_0956C0(0);
    D_001B0CC0 = func_0956C0(1);
    func_0BE530();
    func_110B48(0, D_001C9278, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
