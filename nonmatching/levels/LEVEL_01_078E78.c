/* LEVEL_01.REL:0x078E78: reviewed 136-byte candidate, held for ABI review.
 * Detaches a looked-up record, relinks its owner when it points at the shared
 * marker, clears it and decrements the live count.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0794D8 returning pointer with (pointer), but the accepted
 * LEVEL_01_0794D8.c defines it returning pointer with (int).
 * It declares func_079568 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_079568.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char *func_0794D8(unsigned char *o);
extern void func_079568(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_00078F68[];
extern unsigned char D_001F60EC[];

void func_078E78(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_0794D8(a0);
    if (s1 != 0) {
        func_079568(*(void **)s1, (void *)D_00078F68);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_00078F68) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_001F60EC = *(int *)D_001F60EC - 1;
    }
}
