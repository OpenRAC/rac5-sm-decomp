/* LEVEL_01:0x12EF00 -- maps a decoded (kind, slot) pair to a text id, or 0 when it does not apply. */
extern int func_12EC10(int *a, int *b);

int func_12EF00(int a, int b)
{
    int x = a;
    int y = b;

    if (func_12EC10(&x, &y) == 0)
        return 0;
    if (y == 3 || y == 0x16) {
        switch (x) {
        case 0:
            return 0x298;
        case 1:
            return 0x299;
        case 2:
            return 0x29A;
        case 3:
            return 0x29B;
        default:
            return 0;
        }
    }
    if (y == 6 || y == 0x17) {
        switch (x) {
        case 0:
            return 0x29D;
        case 1:
            return 0x29F;
        case 2:
            return 0x2A1;
        case 3:
            return 0x2A3;
        default:
            return 0;
        }
    }
    return 0;
}
