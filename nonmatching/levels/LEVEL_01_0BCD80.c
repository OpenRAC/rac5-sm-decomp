/* USA LEVEL_01.REL:0x0BCD80 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0BEF80.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern char *D_002356F0;
extern char *D_00328B70;
extern char *D_00328B74;
extern char D_00328BE0[];
extern char D_00328C08[];
extern char D_00328B80[];

extern int func_089B60(char *a, unsigned int flags, int value, char *result);
extern int func_089BE8(char *a, char *b);
extern void func_088F68(char *p);
extern void func_088B20(char *a, char *b, float t);

int func_0BCD80(void)
{
    D_00328B70 = D_002356F0;
    D_00328B74 = *(char **)(*(char **)(D_00328B70 + 0x40) + 4);
    func_089B60(*(char **)(D_00328B74 + 8), 0xFFFFFFFF, *(int *)(D_00328B74 + 4) + 0x20, D_00328BE0);
    func_089BE8(**(char ***)(D_00328B74 + 8) + 0x13C0, D_00328BE0);
    func_089B60(*(char **)(D_00328B74 + 8), 0xFFFFFFFF, *(int *)(D_00328B74 + 4) + 0x20, D_00328C08);
    func_089BE8(**(char ***)(D_00328B74 + 8) + 0x13C0, D_00328C08);
    func_088F68(D_00328B80);
    func_088B20(D_00328B80, D_00328BE0, 0.0f);
    return 1;
}
