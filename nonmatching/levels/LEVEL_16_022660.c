/* LEVEL_16.REL:0x022660: reviewed 140-byte candidate, held for ABI review.
 * Scans three indexed slots with a helper and, on the first hit, returns
 * whether the byte at that index of a second record is set.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer, int, int), but the
 * accepted caller LEVEL_16_12D180.c declares it returning pointer with (int,
 * int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    char pad_00[0x48];
    unsigned char b_48[3];
};

int func_0224D0(void *a0, int a1, int a2, int a3);
struct Rec *func_0220C8(void *a0, int a1);

int func_022660(void *a0, int a1, int a2)
{
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (func_0224D0(a0, a1, i, a2) != 0) {
            return func_0220C8(a0, a2)->b_48[i] != 0;
        }
    }
    return 0;
}
