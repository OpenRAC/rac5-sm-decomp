/* LEVEL_08:0x1AD8D0 -- placement copy of LEVEL_01_18D750.c: when the global switch is on and the counter is not positive, bumps the counter and starts the effect for the first word of the object's linked record. */
extern unsigned char D_0023F02C;
extern int D_00251BB4;
extern void func_02BED8(unsigned int value);

void func_1AD8D0(char *o)
{
    if (D_0023F02C != 0) {
        if (D_00251BB4 <= 0) {
            D_00251BB4 = D_00251BB4 + 1;
            func_02BED8(**(int **)(o + 0x54));
        }
    }
}
