/* LEVEL_01.REL:0x012F50: reviewed 412-byte candidate, held for ABI review.
 * Clears a buffer and accumulates results over three lists of scene entries.
 * pinned C with gnu-ee-trial links 412/412 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0958D0 returning int with (pointer, int, pointer, pointer,
 * int), but the accepted LEVEL_01_0958D0.c defines it returning int with
 * (pointer, pointer, pointer, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x1C];
    char *list3;
    int cnt3;
    char pad24[8];
    char *list2;
    unsigned int cnt2;
    char pad34[0x10];
    char *list1;
    int cnt1;
} Scene;

extern Scene *D_00206D90;
extern void *memset(void *, int, unsigned int);
extern int func_082568(float *a, float *b, char *e);
extern int func_084468(float *a, float *b, char *e);
extern int func_083BA0(float *a, float *b, char *e);
extern int func_0958D0(void *buf, int a, float *x, float *y, int n);

int func_012F50(void *buf, int a, int n)
{
    float v0[4];
    float v1[4];
    float v2[4];
    char *e;
    char *end;
    int total;
    int i;
    int cnt;
    int j;

    memset(buf, 0, n * 8);
    total = 0;
    e = D_00206D90->list1;
    end = e + D_00206D90->cnt1 * 0x80;
    for (; e != end; e += 0x80) {
        int r = func_082568(v0, v1, e);
        if (r)
            total += func_0958D0(buf, a, v0, v1, r);
    }
    e = D_00206D90->list2;
    for (i = 0; i < D_00206D90->cnt2; i++) {
        if (func_084468(v0, v2, e))
            total += func_0958D0(buf, a, v0, v2, 1);
        e += 0x64 + ((unsigned char)e[0x62]) * 8;
    }
    cnt = D_00206D90->cnt3;
    e = D_00206D90->list3;
    for (j = 0; j != cnt; j++) {
        if (func_083BA0(v0, v1, e))
            total += func_0958D0(buf, a, v0, v1, 1);
        e += 0x54 + ((unsigned char)e[0x51]) * 8;
    }
    return total;
}
