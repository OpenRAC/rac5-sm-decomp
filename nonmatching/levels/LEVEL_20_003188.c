/* LEVEL_20.REL:0x003188, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at byte +13:
 * the signed comparison result uses a different register.
 * Reopen: recover the original condition/value lifetime or
 * qualify a compiler route restoring that register choice.
 * Natural control-flow forms and five other cc1 routes did not.
 */
extern void func_0014C0(void);

void func_003188(char *record, int value)
{
    if (value >= *(int *)(record + 0xc))
        func_0014C0();
}
