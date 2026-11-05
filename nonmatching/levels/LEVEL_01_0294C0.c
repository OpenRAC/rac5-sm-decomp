/* LEVEL_01.REL:0x0294C0, bounded 44-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 40 bytes, first linked difference at body byte +4.
 * Reopen: Recover the nested byte-flag tests and the retail boolean return lifetime that adds one operation.
 * Not linked into the accepted gate or counted.
 */
int func_0294C0(unsigned char *object)
{
    int result = 0;
    if (object[0x1A8] != 0) {
        if (object[0x164] != 0)
            result = object[0x120] != 0;
    }
    return result;
}
