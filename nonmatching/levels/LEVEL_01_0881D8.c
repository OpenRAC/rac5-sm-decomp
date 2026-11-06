/* LEVEL_01.REL:0x0881D8, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +24.
 * The conditional byte conversion differs in branch-likely scheduling. Reopen with the original condition expression or a qualified compiler route.
 */
extern int func_02A3F0(int);

unsigned int func_0881D8(char *record)
{
    int state = func_02A3F0(4);
    unsigned int value = (unsigned char)record[8];
    if (state == 0) return value;
    return 0xffu - value;
}
