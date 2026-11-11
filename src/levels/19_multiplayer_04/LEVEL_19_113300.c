/* LEVEL_19:0x113300 -- placement copy of LEVEL_16_112B58.c: stores a value and clears a flag byte, then scans indices two to fifteen and sets the flag on the first hit. */

int func_113378(unsigned int i);

extern int D_001B5DBC;
extern unsigned char D_001B5DC0;

void func_113300(int a0)
{
    unsigned int i;

    D_001B5DBC = a0;
    D_001B5DC0 = 0;
    for (i = 2; i < 16; i++) {
        if (func_113378(i) != 0) {
            D_001B5DC0 = 1;
            break;
        }
    }
}
