/* LEVEL_01.REL:0x0358D8: reviewed 136-byte candidate, held for ABI review.
 * When the count is positive, allocates a block and updates the table
 * pointers, then sets the ready flag.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_10F7A0 returning int with (int, int, pointer, int), but the
 * accepted LEVEL_01_10F7A0.c defines it returning void with (pointer, pointer,
 * pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_10F7A0(int a, int b, void *c, int d);
extern unsigned char D_002330F8[];
extern unsigned char D_0020DCA0[];

void func_0358D8(void)
{
    unsigned char *g;
    int v;
    int r;
    int p;
    unsigned int idx;
    int *tbl;
    int t;

    g = D_002330F8;
    v = *(int *)(g + 0x1A94);
    if (v > 0) {
        r = func_10F7A0(v * 0x120, 0, (void *)D_0020DCA0, 0x59F);
        *(int *)(g + 0x1A8C) = r;
        p = *(int *)(g + 0x1A94) * 0x90;
        *(int *)(g + 0x1A90) = r + p;
        idx = *(unsigned int *)(g + 0x1A98);
        tbl = (int *)(g + 0x1A8C);
        t = tbl[idx];
        *(int *)(g + 0x1A9C) = t;
        *(int *)(g + 0x1AA0) = t + p;
    }
    *(unsigned char *)(g + 0x1AA4) = 1;
}
