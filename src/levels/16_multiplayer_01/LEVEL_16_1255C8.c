/* LEVEL_16:0x1255C8 -- decays two slot counters and nudges two level values toward a clamped range. */

extern int D_001BD4C0[];
extern int D_001BD4C8[];

int func_0A4B98(int idx);
int func_0A3A78(int idx);

void func_1255C8(void)
{
    unsigned int i;
    int mx;


    for (i = 0; i < 2; i++) {
        if (D_001BD4C0[i] != 0) {
            D_001BD4C0[i] = D_001BD4C0[i] - 1;
        }
        if (func_0A4B98(i) != 0 || func_0A3A78(i) != 0) {
            D_001BD4C8[i] = D_001BD4C8[i] - 8;
        } else {
            D_001BD4C8[i] = D_001BD4C8[i] + 8;
        }
        mx = 0xCC;
        if (mx < D_001BD4C8[i]) {
            D_001BD4C8[i] = mx;
        }
        if (D_001BD4C8[i] < 0) {
            D_001BD4C8[i] = 0;
        }
    }
}
