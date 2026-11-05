/* LEVEL_01.REL:0x0A60C8, bounded 48-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 48 bytes, first linked difference at body byte +4.
 * Reopen: Recover the packed high-byte extraction and alpha mask scheduling before field stores.
 * Not linked into the accepted gate or counted.
 */
void func_0A60C8(char *object, unsigned int packed, int byte_value, unsigned int alpha)
{
    object[5] = byte_value;
    *(unsigned int *)(object + 0x10) = alpha & 0xFF;
    *(unsigned int *)(object + 0x0C) = packed & 0xFFFFFF;
    *(unsigned int *)(object + 0) = packed >> 24;
    *(unsigned int *)(object + 8) = packed >> 24;
    object[4] = 0;
}
