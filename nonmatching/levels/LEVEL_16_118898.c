/* LEVEL_16.REL:0x118898: reviewed 160-byte candidate, held for ABI review.
 * Calls a helper on a record field, picks a code from a table word and calls a
 * final helper with eight arguments.
 * pinned C with gnu-ee-trial links 160/160 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_115320 returning int with (pointer), but the accepted
 * LEVEL_16_115320.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int func_115320(char *a0);
extern void func_118938(char *a0, char *a1, unsigned int a2, unsigned int a3, int a4, int a5, char *a6);

void func_118898(char *a0, char *a1, char *a2)
{
    char *p;
    char *ptr;
    unsigned int r;
    unsigned int t;
    unsigned int w;

    r = func_115320(*(char **)(a1 + 0xFC));
    t = 0x53;
    p = *(char **)(a1 + 0x5E0);
    if (p != 0) {
        ptr = *(char **)(*(char **)(p + 0x40) + 4);
        w = *(unsigned int *)(ptr + *(unsigned char *)(p + 0x44) * 0x34 + 0x20);
        if (w == 0xC3CCF603u) {
            t = 0x4A;
        }
    }
    func_118938(a0, a1 + 0x30, t, r, 3, 3, a2);
}
