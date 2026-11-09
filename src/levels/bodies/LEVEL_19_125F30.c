/* LEVEL_19:0x125F30 -- placement copy of LEVEL_16_1255C8.c: decays two slot counters and nudges two level values toward a clamped range. */

extern int D_001BE638[];
extern int D_001BE640[];

int func_0A4410(int idx);
int func_0A32F0(int idx);

void func_125F30(void)
{
    unsigned int i;
    int mx;


    for (i = 0; i < 2; i++) {
        if (D_001BE638[i] != 0) {
            D_001BE638[i] = D_001BE638[i] - 1;
        }
        if (func_0A4410(i) != 0 || func_0A32F0(i) != 0) {
            D_001BE640[i] = D_001BE640[i] - 8;
        } else {
            D_001BE640[i] = D_001BE640[i] + 8;
        }
        mx = 0xCC;
        if (mx < D_001BE640[i]) {
            D_001BE640[i] = mx;
        }
        if (D_001BE640[i] < 0) {
            D_001BE640[i] = 0;
        }
    }
}
