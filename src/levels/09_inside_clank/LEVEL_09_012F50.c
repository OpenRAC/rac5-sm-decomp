/* LEVEL_09:0x012F50 -- placement copy of LEVEL_01_012F50.c: clears a buffer and accumulates results over three lists of scene entries. */
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

extern Scene *D_001F0890;
extern void *memset(void *, int, unsigned int);
extern int func_07EFE8(float *a, float *b, char *e);
extern int func_080E48(float *a, float *b, char *e);
extern int func_0805D8(float *a, float *b, char *e);
extern int func_092028(void *buf, void *a, float *x, float *y, int n);

int func_012F50(void *buf, void *a, int n)
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
    e = D_001F0890->list1;
    end = e + D_001F0890->cnt1 * 0x80;
    for (; e != end; e += 0x80) {
        int r = func_07EFE8(v0, v1, e);
        if (r)
            total += func_092028(buf, a, v0, v1, r);
    }
    e = D_001F0890->list2;
    for (i = 0; i < D_001F0890->cnt2; i++) {
        if (func_080E48(v0, v2, e))
            total += func_092028(buf, a, v0, v2, 1);
        e += 0x64 + ((unsigned char)e[0x62]) * 8;
    }
    cnt = D_001F0890->cnt3;
    e = D_001F0890->list3;
    for (j = 0; j != cnt; j++) {
        if (func_0805D8(v0, v1, e))
            total += func_092028(buf, a, v0, v1, 1);
        e += 0x54 + ((unsigned char)e[0x51]) * 8;
    }
    return total;
}
