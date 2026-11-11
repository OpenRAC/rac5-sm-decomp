/* LEVEL_18:0x116B70 -- placement copy of LEVEL_16_117B40.c: returns the partner value of the unique smallest entry in a four-slot table, or zero when a flag call fails or the minimum is tied. */
extern int D_002E0008[];
extern int D_002E0078[];
int func_111C20(void);

int func_116B70(void)
{
    int min;
    int tie;
    int res;
    unsigned int k;
    int a;

    min = 0x7FFFFFFF;
    res = 0;
    tie = 0;
    if (func_111C20() != 0) {
        return 0;
    }
    k = 0;
    do {
        if (D_002E0078[k] != 0) {
            a = D_002E0008[k];
            if (a < min) {
                min = a;
                res = D_002E0078[k];
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
