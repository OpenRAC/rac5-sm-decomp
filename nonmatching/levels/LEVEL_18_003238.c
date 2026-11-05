/* LEVEL_18.REL:0x003238, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at byte +13:
 * the signed comparison result uses a different register.
 * Reopen: recover the original condition/value lifetime or
 * qualify a compiler route restoring that register choice.
 * Natural control-flow forms and five other cc1 routes did not.
 */
extern void func_001570(void);

void func_003238(char *record, int value)
{
    if (value >= *(int *)(record + 0xc))
        func_001570();
}
