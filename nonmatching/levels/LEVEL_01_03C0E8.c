/* LEVEL_01.REL:0x03C0E8, bounded 52-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 56 bytes, first linked difference at body byte +9.
 * Reopen: Recover the retail 64-bit clear-mask materialization and final field update.
 * Not linked into the accepted gate or counted.
 */
void func_03C0E8(char *object, unsigned int enabled)
{
    unsigned long long *word = (unsigned long long *)(object + 0x960);
    *word = (*word & ~(1ULL << 47)) | ((unsigned long long)(enabled & 1) << 47);
}
