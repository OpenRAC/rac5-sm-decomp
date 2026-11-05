/* LEVEL_01.REL:0x134F68, bounded 52-byte candidate; 15 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 52 bytes, first linked difference at body byte +24.
 * Reopen: Recover the record field-store and zero-fill grouping after the first six exact operations.
 * Not linked into the accepted gate or counted.
 */
void func_134F68(unsigned char *object, int a1, int a2, unsigned long long a3)
{
    int offset = a1 + 8;
    int enabled = 1;
    *(int *)(object + 8) = a2;
    *(int *)(object + 0x40) = enabled;
    *(int *)(object + 0x3C) = offset;
    *(unsigned long long *)(object + 0x28) = a3;
    *(unsigned long long *)(object + 0x30) = 0;
    *(int *)(object + 0) = 0;
    *(unsigned long long *)(object + 0x10) = 0;
    *(int *)(object + 4) = a1;
    *(unsigned long long *)(object + 0x20) = 0;
    object[0x38] = 0;
}
