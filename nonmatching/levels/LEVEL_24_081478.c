/* LEVEL_24.REL:0x081478, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +24.
 * The conditional byte conversion differs in branch-likely scheduling. Reopen with the original condition expression or a qualified compiler route.
 */
extern int func_027930(int);

unsigned int func_081478(char *record)
{
    int state = func_027930(4);
    unsigned int value = (unsigned char)record[8];
    if (state == 0) return value;
    return 0xffu - value;
}
