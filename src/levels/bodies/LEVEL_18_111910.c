/* LEVEL_18:0x111910 -- placement copy of LEVEL_16_112B58.c: stores a value and clears a flag byte, then scans indices two to fifteen and sets the flag on the first hit. */

int func_111988(unsigned int i);

extern int D_001B60BC;
extern unsigned char D_001B60C0;

void func_111910(int a0)
{
    unsigned int i;

    D_001B60BC = a0;
    D_001B60C0 = 0;
    for (i = 2; i < 16; i++) {
        if (func_111988(i) != 0) {
            D_001B60C0 = 1;
            break;
        }
    }
}
