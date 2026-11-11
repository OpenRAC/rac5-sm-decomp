/* LEVEL_20:0x0F76C8 -- placement copy of LEVEL_16_1255C8.c: decays two slot counters and nudges two level values toward a clamped range. */

extern int D_0011FB60[];
extern int D_0011FB68[];

int func_08F210(int idx);
int func_08E158(int idx);

void func_0F76C8(void)
{
    unsigned int i;
    int mx;


    for (i = 0; i < 2; i++) {
        if (D_0011FB60[i] != 0) {
            D_0011FB60[i] = D_0011FB60[i] - 1;
        }
        if (func_08F210(i) != 0 || func_08E158(i) != 0) {
            D_0011FB68[i] = D_0011FB68[i] - 8;
        } else {
            D_0011FB68[i] = D_0011FB68[i] + 8;
        }
        mx = 0xCC;
        if (mx < D_0011FB68[i]) {
            D_0011FB68[i] = mx;
        }
        if (D_0011FB68[i] < 0) {
            D_0011FB68[i] = 0;
        }
    }
}
