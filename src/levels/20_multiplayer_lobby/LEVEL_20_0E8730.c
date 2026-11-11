/* LEVEL_20:0x0E8730 -- placement copy of LEVEL_16_115E30.c: scans two status records, then fires an event when the scan passes. */

typedef struct {
    char pad_00[0x14];
    int w_14;
    char pad_18[0x4];
} Rec115E30;

extern Rec115E30 D_00202F10[];
extern void func_0E7E60(int a);
extern void func_0E7D80(int a, int b, int c, int d);

int func_0E8730(void)
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
        v = D_00202F10[i].w_14;
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
    func_0E7E60(last);
    func_0E7D80(1, 0, 90, 0);
    return 1;
}
