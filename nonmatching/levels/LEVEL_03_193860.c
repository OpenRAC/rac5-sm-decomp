/* LEVEL_03.REL:0x193860: reviewed 68-byte candidate.
 * Maps a kind to its class: 0 gives 1, 1 to 3 give 2, anything else 0xFF.
 * pinned C with gnu-ee-trial links 68/68 bytes; first differs at +28.
 * In the retail the default case branches to a shared final return and case 3
 * reuses the block that returns 2; the compiled switch returns inline and
 * keeps a separate case-3 block under all four profiles.
 * Retry: Recover the original case order or shared-return structure.
 * No matching credit.
 */
int func_193860(void *self, unsigned int kind)
{
    switch (kind) {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 2;
    case 3:
        return 2;
    default:
        return 0xFF;
    }
}
