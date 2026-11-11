/* LEVEL_16:0x117B40 -- returns the partner value of the unique smallest entry in a four-slot table, or zero when a flag call fails or the minimum is tied. */
extern int D_002DFC88[];
extern int D_002DFCF8[];
int func_112E68(void);

int func_117B40(void)
{
    int min;
    int tie;
    int res;
    unsigned int k;
    int a;

    min = 0x7FFFFFFF;
    res = 0;
    tie = 0;
    if (func_112E68() != 0) {
        return 0;
    }
    k = 0;
    do {
        if (D_002DFCF8[k] != 0) {
            a = D_002DFC88[k];
            if (a < min) {
                min = a;
                res = D_002DFCF8[k];
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
