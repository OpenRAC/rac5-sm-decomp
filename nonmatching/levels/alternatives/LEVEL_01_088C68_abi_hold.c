/* LEVEL_01.REL:0x088C68: reviewed 56-byte candidate, held for ABI review.
 * Forwards the first non-null of two record pointers, or returns 0.
 * pinned C with gnu-ee-trial links 56/56 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_088C28 returning long long with (pointer), but the accepted
 * LEVEL_01_088C28.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern long long func_088C28(char *);

long long func_088C68(char *record)
{
    int a;
    char *p;

    p = record;
    a = *(int *)(p + 0x14);
    if (a == 0) {
        a = *(int *)(p + 0x18);
        if (a == 0)
            return 0;
    }
    return func_088C28((char *)a);
}
