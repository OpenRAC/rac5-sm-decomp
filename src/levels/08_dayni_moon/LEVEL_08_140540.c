/* LEVEL_08:0x140540 -- placement copy of LEVEL_01_12F008.c: maps a pair of codes to a message id, or zero when it has none. */
extern int func_140148(int *a, int *b);

int func_140540(int a, int b)
{
    if (!func_140148(&a, &b)) {
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
