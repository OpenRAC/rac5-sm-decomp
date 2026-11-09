/* LEVEL_08:0x1EC980 -- placement copy of LEVEL_04_1C3800.c: reports whether the record's mode and flag bytes allow the secondary check to pass. */

extern int func_084A40(char *a0, int a1);

int func_1EC980(char *a0)
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
                if (x != 0x1C || func_084A40(a0, 0) != 0) {
                    r = 1;
                }
            }
        }
    }
    return r;
}
