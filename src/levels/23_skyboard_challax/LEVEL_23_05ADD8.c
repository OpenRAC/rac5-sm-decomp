/* LEVEL_23:0x05ADD8 -- placement copy of LEVEL_22_057228.c: publishes the word and copies the three floats into
   the shared slots. */
extern char D_002025C0[];
extern int D_001C7CD4;
extern float D_002065B8[];

void func_05ADD8(float *a0, int a1)
{
    if (D_002025C0) {
        if (a0 != 0) {
            D_001C7CD4 = a1;
            D_002065B8[0] = a0[0];
            D_002065B8[1] = a0[1];
            D_002065B8[2] = a0[2];
        }
    }
}
