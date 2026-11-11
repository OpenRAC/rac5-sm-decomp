/* LEVEL_01.REL:000710 -- returns the entry of the table D_0020B4B0, or zero
   past its eight entries. */
extern float D_0020B4B0[];

float func_000710(int a0)
{
    if (a0 >= 8) {
        return 0.0f;
    }
    return D_0020B4B0[a0];
}
