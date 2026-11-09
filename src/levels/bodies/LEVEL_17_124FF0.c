/* LEVEL_17:0x124FF0 -- placement copy of LEVEL_16_1255C8.c: decays two slot counters and nudges two level values toward a clamped range. */

extern int D_001B0AB8[];
extern int D_001B0AC0[];

int func_0A4078(int idx);
int func_0A2F58(int idx);

void func_124FF0(void)
{
    unsigned int i;
    int mx;


    for (i = 0; i < 2; i++) {
        if (D_001B0AB8[i] != 0) {
            D_001B0AB8[i] = D_001B0AB8[i] - 1;
        }
        if (func_0A4078(i) != 0 || func_0A2F58(i) != 0) {
            D_001B0AC0[i] = D_001B0AC0[i] - 8;
        } else {
            D_001B0AC0[i] = D_001B0AC0[i] + 8;
        }
        mx = 0xCC;
        if (mx < D_001B0AC0[i]) {
            D_001B0AC0[i] = mx;
        }
        if (D_001B0AC0[i] < 0) {
            D_001B0AC0[i] = 0;
        }
    }
}
