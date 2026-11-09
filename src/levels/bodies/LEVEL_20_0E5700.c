/* LEVEL_20:0x0E5700 -- placement copy of LEVEL_16_112B58.c: stores a value and clears a flag byte, then scans indices two to fifteen and sets the flag on the first hit. */

int func_0E5778(unsigned int i);

extern int D_001172FC;
extern unsigned char D_00117300;

void func_0E5700(int a0)
{
    unsigned int i;

    D_001172FC = a0;
    D_00117300 = 0;
    for (i = 2; i < 16; i++) {
        if (func_0E5778(i) != 0) {
            D_00117300 = 1;
            break;
        }
    }
}
