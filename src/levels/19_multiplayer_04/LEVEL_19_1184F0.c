/* LEVEL_19:0x1184F0 -- placement copy of LEVEL_16_117B40.c: returns the partner value of the unique smallest entry in a four-slot table, or zero when a flag call fails or the minimum is tied. */
extern int D_002DFE08[];
extern int D_002DFE78[];
int func_113610(void);

int func_1184F0(void)
{
    int min;
    int tie;
    int res;
    unsigned int k;
    int a;

    min = 0x7FFFFFFF;
    res = 0;
    tie = 0;
    if (func_113610() != 0) {
        return 0;
    }
    k = 0;
    do {
        if (D_002DFE78[k] != 0) {
            a = D_002DFE08[k];
            if (a < min) {
                min = a;
                res = D_002DFE78[k];
                tie = 0;
            } else if (a == min) {
                tie = 1;
            }
        }
        k++;
    } while (k < 4);
    if (tie == 0) {
        return res;
    }
    return 0;
}
