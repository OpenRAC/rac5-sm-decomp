/* LEVEL_01.REL:0x0A33A8: reviewed 336-byte candidate, held for ABI review.
 * Replaces matching packed color words in a table, either by a byte range test
 * or by an exact 24-bit key.
 * pinned C with gnu-ee-trial links 336/336 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_0A07C8 returning pointer with (pointer), but the accepted
 * FRONTEND_005C80.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[4];
    unsigned short kind_04;
    char pad_06[2];
    unsigned short n_08;
} Hdr;

extern unsigned int *func_0A0850(void *o, int a, int b);
extern Hdr *func_0A07C8(void *o);

int func_0A33A8(void *o, unsigned int key, unsigned int val, unsigned char *col)
{
    unsigned int *ents;
    Hdr *h;
    unsigned int n;
    unsigned int i;
    unsigned int j;
    int found;
    unsigned char lo0;
    unsigned char lo1;
    unsigned int *p;
    unsigned char c0;
    unsigned char c1;
    unsigned int c2;

    ents = func_0A0850(o, 0, 0);
    h = func_0A07C8(o);
    if (h == 0 || h->kind_04 != 3) {
        return 0;
    }
    n = h->n_08;
    found = 0;
    if (col != 0) {
        lo0 = 255 - col[0];
        lo1 = 255 - col[1];
        for (i = 0; i < n; i++) {
            p = &ents[i];
            c0 = ((unsigned char *)p)[0];
            c1 = ((unsigned char *)p)[1];
            c2 = (*p & 0xFF0000) >> 16;
            if (c0 >= lo0 && col[2] >= c1 && c2 >= lo1) {
                *p = val;
                found = 1;
            }
        }
    } else {
        for (j = 0; j < n; j++) {
            if ((ents[j] & 0xFFFFFF) == key) {
                ents[j] = val;
                found = 1;
            }
        }
    }
    return found;
}
