/* LEVEL_16:0x112B58 -- stores a value and clears a flag byte, then scans indices two to fifteen and sets the flag on the first hit. */

int func_112BD0(unsigned int i);

extern int D_001B4C3C;
extern unsigned char D_001B4C40;

void func_112B58(int a0)
{
    unsigned int i;

    D_001B4C3C = a0;
    D_001B4C40 = 0;
    for (i = 2; i < 16; i++) {
        if (func_112BD0(i) != 0) {
            D_001B4C40 = 1;
            break;
        }
    }
}
