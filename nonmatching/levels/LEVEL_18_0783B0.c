/* LEVEL_18.REL:0x0783B0, bounded 40-byte body.
 * Isolated pinned C links 40 bytes; first difference at body byte +24:
 * a conditional move replaces the retail boolean conversion.
 * Reopen: recover the value lifetime or qualify a compiler route
 * that keeps the boolean conversion and register copies. Wide
 * return/local variants and five other cc1 routes did not match.
 */
extern unsigned char D_001F1B40[];

long long func_0783B0(void)
{
    return D_001F1B40[0x144] != 0 &&
           D_001F1B40[0x384] != 0;
}
