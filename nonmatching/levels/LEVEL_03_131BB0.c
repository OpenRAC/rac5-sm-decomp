/* LEVEL_03.REL:0x131BB0, bounded 40-byte body.
 * Isolated pinned C links 40 bytes; first difference at body byte +28:
 * the compiler uses a bit shift instead of the retail signed compare.
 * Reopen: recover a natural source type/expression or qualify a
 * compiler route that retains the signed comparison. The direct
 * sign test, complemented value and five other cc1 routes did not.
 */
extern char *D_0021F6CC;

int func_131BB0(void)
{
    char *p = D_0021F6CC;
    if (p == 0)
        return 0;
    return *(int *)(p + 0xdc) >= 0;
}
