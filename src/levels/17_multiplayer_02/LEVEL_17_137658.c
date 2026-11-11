/* LEVEL_17:0x137658 -- placement copy of LEVEL_16_13BC48.c: scans a range of slot numbers, skipping two reserved values, and returns 1 on the first accepted slot. */

int func_022368(int i);
int func_112360(int i);

int func_137658(char *a0)
{
    unsigned char *s1;
    unsigned int s0;

    s1 = *(unsigned char **)(a0 + 0x54);
    s0 = 2;
    do {
        if (s0 == s1[0x12]) {
            s0++;
        } else if (s0 == s1[0x13]) {
            s0++;
        } else if (func_022368(s0) == 0) {
            s0++;
        } else {
            if (func_112360(s0) != 0) {
                return 1;
            }
            s0++;
        }
    } while (s0 < 0xF);
    return 0;
}
