/* LEVEL_01.REL:0x03BF08: reviewed 48-byte candidate, held for ABI review.
 * Sets or clears bit 5 of a child record's flag word from an inverted input.
 * pinned C with gnu-ee-trial links 48/48 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, int), but the accepted
 * caller LEVEL_01_03BF38.c declares it returning void with (pointer, pointer).
 * It defines the function returning void with (pointer, int), but the accepted
 * caller LEVEL_01_03C060.c declares it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_03BF08(char *object, int enabled)
{
    char *child = *(char **)(object + 0x5A0);
    if (child != 0) {
        int flags = *(int *)(child + 0x64);
        int bit = (enabled ^ 1) & 1;
        flags = flags & -33;
        flags = flags | (bit << 5);
        *(int *)(child + 0x64) = flags;
    }
}
