/* LEVEL_18:0x124680 -- placement copy of LEVEL_16_1255C8.c: decays two slot counters and nudges two level values toward a clamped range. */

extern int D_001BE940[];
extern int D_001BE948[];

int func_0A3B90(int idx);
int func_0A2A70(int idx);

void func_124680(void)
{
    unsigned int i;
    int mx;


    for (i = 0; i < 2; i++) {
        if (D_001BE940[i] != 0) {
            D_001BE940[i] = D_001BE940[i] - 1;
        }
        if (func_0A3B90(i) != 0 || func_0A2A70(i) != 0) {
            D_001BE948[i] = D_001BE948[i] - 8;
        } else {
            D_001BE948[i] = D_001BE948[i] + 8;
        }
        mx = 0xCC;
        if (mx < D_001BE948[i]) {
            D_001BE948[i] = mx;
        }
        if (D_001BE948[i] < 0) {
            D_001BE948[i] = 0;
        }
    }
}
