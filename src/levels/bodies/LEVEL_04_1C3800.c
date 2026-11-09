/* LEVEL_04:0x1C3800 -- reports whether the record's mode and flag bytes allow the secondary check to pass. */

extern int func_07FF30(char *a0, int a1);

int func_1C3800(char *a0)
{
    unsigned char *v1;
    unsigned char x;
    int r;

    r = 0;
    v1 = *(unsigned char **)(a0 + 0x58);
    if (v1[0xC1] != 0) {
        x = (unsigned char)a0[0x45];
        if (x != v1[0xC1]) {
            if (v1[0xBE] == 0) {
                if (x != 0x1C || func_07FF30(a0, 0) != 0) {
                    r = 1;
                }
            }
        }
    }
    return r;
}
