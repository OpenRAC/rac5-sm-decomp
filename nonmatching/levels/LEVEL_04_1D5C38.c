/* LEVEL_04.REL:0x1D5C38: reviewed 160-byte candidate, held for ABI review.
 * Calls a helper for each pointer in an array until one reports success.
 * pinned C with gnu-ee-trial links 160/160 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_171AB8 returning int with (pointer, pointer, pointer,
 * pointer), but the accepted LEVEL_04_171AB8.c defines it returning long long
 * with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_171AB8(void *a, void *b, void *c, void *d);

int func_1D5C38(char *a0, void *a1, void *a2, void *a3)
{
    char *obj;
    char **p;
    int i;

    i = 0;
    obj = *(char **)(a0 + 0x58);
    a0 = *(char **)(a0 + 0x54);
    if (*(unsigned char *)(obj + 0x49) == 0) {
        return 0;
    }
    p = (char **)(a0 + 0x50);
    do {
        if (func_171AB8(*p, a1, a2, a3) != 0) {
            return 1;
        }
        i++;
        p++;
    } while ((unsigned int)i < *(unsigned char *)(obj + 0x49));
    return 0;
}
