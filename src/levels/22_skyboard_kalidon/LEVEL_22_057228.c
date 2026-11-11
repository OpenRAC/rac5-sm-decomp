/* LEVEL_22:0x057228 -- publishes the word and copies the three floats into
   the shared slots. */
extern char D_00186D40[];
extern int D_00153C54;
extern float D_0018AD38[];

void func_057228(float *a0, int a1)
{
    if (D_00186D40) {
        if (a0 != 0) {
            D_00153C54 = a1;
            D_0018AD38[0] = a0[0];
            D_0018AD38[1] = a0[1];
            D_0018AD38[2] = a0[2];
        }
    }
}
