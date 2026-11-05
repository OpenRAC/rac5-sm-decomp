/* LEVEL_01.REL:0x027480, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at byte +4:
 * clear-mask normalization and indexed-address setup are
 * scheduled in the opposite order.
 * Reopen: recover a natural record layout/expression or a
 * qualified compiler route preserving retail scheduling.
 * Operand/pointer forms and five other cc1 routes did not.
 */
extern unsigned char *D_001F3FAC;

void func_027480(int index, unsigned char set, unsigned char clear)
{
    unsigned char *cell = D_001F3FAC + 0x8c0 + index;
    *cell = set | (*cell & ~clear);
}
