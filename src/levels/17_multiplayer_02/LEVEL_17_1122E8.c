/* LEVEL_17:0x1122E8 -- placement copy of LEVEL_16_112B58.c: stores a value and clears a flag byte, then scans indices two to fifteen and sets the flag on the first hit. */

int func_112360(unsigned int i);

extern int D_001A823C;
extern unsigned char D_001A8240;

void func_1122E8(int a0)
{
    unsigned int i;

    D_001A823C = a0;
    D_001A8240 = 0;
    for (i = 2; i < 16; i++) {
        if (func_112360(i) != 0) {
            D_001A8240 = 1;
            break;
        }
    }
}
