/* FRONTEND.REL:0x01F1A0: reviewed 104-byte candidate.
 * pinned C with gnu-ee-trial links 104 bytes; first differs at +62.
 * Retry: Resolve the v0/v1 allocation for the table index from byte 62 and review the
 * caller's second-argument prototype.
 * No matching credit.
 */
extern int func_01F338(void *);

int func_01F1A0(void *object, int index)
{
    char *items;
    if (index == 0) {
        return 0;
    }
    if (func_01F338(object) == 0) {
        return 0;
    }
    if (*(int *)((char *)object + 4) < index) {
        return 0;
    }
    items = *(char **)object;
    return *(int *)(items + index * 8 + 8);
}
