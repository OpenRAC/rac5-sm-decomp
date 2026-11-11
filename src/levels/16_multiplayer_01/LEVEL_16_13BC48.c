/* LEVEL_16:0x13BC48 -- scans a range of slot numbers, skipping two reserved values, and returns 1 on the first accepted slot. */

int func_0229E8(int i);
int func_112BD0(int i);

int func_13BC48(char *a0)
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
        } else if (func_0229E8(s0) == 0) {
            s0++;
        } else {
            if (func_112BD0(s0) != 0) {
                return 1;
            }
            s0++;
        }
    } while (s0 < 0xF);
    return 0;
}
