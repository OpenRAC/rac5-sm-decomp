/* LEVEL_01.REL:0x08BE88, bounded 36-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 36 bytes, first linked difference at body byte +12.
 * Reopen: Recover the byte and zero-store ordering while retaining the signed -1 constant and the final delay-slot store.
 * Not linked into the accepted gate or counted.
 */
void func_08BE88(signed char *object, int value)
{
    object[0] = value;
    object[5] = -1;
    object[4] = -1;
    *(int *)(object + 8) = 0;
    object[1] = 0;
    object[2] = 0;
    object[3] = 0;
}
