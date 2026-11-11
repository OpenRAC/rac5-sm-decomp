/* LEVEL_19:0x1165A8 -- placement copy of LEVEL_16_115E30.c: scans two status records, then fires an event when the scan passes. */

typedef struct {
    char pad_00[0x14];
    int w_14;
    char pad_18[0x4];
} Rec115E30;

extern Rec115E30 D_002DFB38[];
extern void func_115CD8(int a);
extern void func_115BB0(int a, int b, int c, int d);

int func_1165A8(void)
{
    unsigned int i;
    unsigned int a2;
    unsigned int cnt;
    int last;
    int v;

    cnt = 0;
    a2 = 0;
    i = 0;
    last = -1;
    for (; i < 2; i++) {
        v = D_002DFB38[i].w_14;
        if (v & 2) {
            a2++;
        }
        if ((v & 6) == 2) {
            cnt++;
            last = i;
        }
    }
    if (a2 < 2) {
        return 0;
    }
    if (cnt >= 2) {
        return 0;
    }
    func_115CD8(last);
    func_115BB0(1, 0, 90, 0);
    return 1;
}
