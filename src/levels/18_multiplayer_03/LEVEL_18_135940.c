/* LEVEL_18:0x135940 -- placement copy of LEVEL_16_1368F8.c: appends the value to the global table unless it is already present. */
extern int D_001BEB80;
extern char *D_002E2FA0[];

void func_135940(char *value)
{
    unsigned int i;

    for (i = 0; i < D_001BEB80; i++) {
        if (D_002E2FA0[i] == value) {
            break;
        }
    }
    if (i == D_001BEB80) {
        D_002E2FA0[i] = value;
        D_001BEB80 = i + 1;
    }
}
