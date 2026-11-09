/* LEVEL_16.REL:0x025338: reviewed 268-byte candidate, held for ABI review.
 * Registers a key in the first free slot of one of two tables unless already
 * present.
 * pinned C with gnu-ee-trial links 268/268 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_022070 returning int with (int, int), but the accepted
 * LEVEL_16_022070.c defines it returning pointer with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001A1AB4;
extern int D_001A1AC0[8];
extern int func_022070(int, int);

int func_025338(int key, int flag)
{
    unsigned int i;
    int idx;
    int *t;
    int *u;
    int *w;
    int k4;

    if (func_022070(key, -1) != 0)
        return 0;
    for (i = 0; i < 8; i++) {
        t = flag ? D_001A1AC0 : (int *)(D_001A1AB4 + 0x864);
        if (t[i] == key)
            return 0;
    }
    idx = -1;
    for (i = 0; i < 8; i++) {
        u = flag ? D_001A1AC0 : (int *)(D_001A1AB4 + 0x864);
        if (u[i] == 0) {
            idx = i;
            break;
        }
    }
    if (idx < 0)
        return 0;
    w = flag ? D_001A1AC0 : (int *)(D_001A1AB4 + 0x864);
    k4 = idx * 4;
    *(int *)((char *)w + idx * 4) = key;
    *(int *)(D_001A1AB4 + k4 + 0x884) = 0;
    return 1;
}
