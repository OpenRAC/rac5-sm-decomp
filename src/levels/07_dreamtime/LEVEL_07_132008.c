/* LEVEL_07:0x132008 -- placement copy of LEVEL_01_12F008.c: maps a pair of codes to a message id, or zero when it has none. */
extern int func_131C10(int *a, int *b);

int func_132008(int a, int b)
{
    if (!func_131C10(&a, &b)) {
        return 0;
    }
    if (b == 3 || b == 0x16) {
        switch (a) {
        case 0:
            return 0x294;
        case 1:
            return 0x295;
        case 2:
            return 0x296;
        case 3:
            return 0x297;
        default:
            return 0;
        }
    }
    if (b == 6 || b == 0x17) {
        switch (a) {
        case 0:
            return 0x29C;
        case 1:
            return 0x29E;
        case 2:
            return 0x2A0;
        case 3:
            return 0x2A2;
        default:
            return 0;
        }
    }
    return 0;
}
