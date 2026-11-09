/* LEVEL_16.REL:0x022A40: reviewed 80-byte candidate, held for ABI review.
 * Calls two helpers with the same arguments and copies one word between their
 * results.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_16_022BA8.c declares it returning void with (int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *func_0220C8(void *a0, void *a1);
extern void *func_022110(void *a0, void *a1);

void func_022A40(void *a0, void *a1)
{
    char *p;
    char *q;

    p = (char *)func_0220C8(a0, a1);
    q = (char *)func_022110(a0, a1);
    *(int *)(p + 0x40) = *(int *)(q + 0x3C);
}
