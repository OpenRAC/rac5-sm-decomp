/* FRONTEND.REL:0x00EC10: reviewed 176-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_0AD148.c.
 * pinned C with gnu-ee-trial links 176/176 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_008AF8 returning int with (pointer), but the accepted
 * FRONTEND_008AF8.c defines it returning int with (int).
 * It declares func_008B28 returning int with (pointer), but the accepted
 * FRONTEND_008B28.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_008AF8(void *p);
extern int func_008B28(void *p);
extern void func_00EA70(void *p, short a, short b, short c, short d,
                        int z1, int z2, int u, int v, int w);

void func_0000EC10(void *param_1, short param_2, short param_3, short param_4,
                   short param_5, int param_6)
{
    int uVar1 = func_008AF8(param_1);
    int v = func_008B28(param_1);

    func_00EA70(param_1, param_2, param_3, param_4, param_5, 0, 0, uVar1, v,
                param_6);
}
