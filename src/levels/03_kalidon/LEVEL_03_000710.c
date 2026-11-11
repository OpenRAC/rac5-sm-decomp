/* LEVEL_03.REL:0x000710 -- reads one entry of the eight-float table, or
   zero past its end. */
extern float D_002243B0[];

float func_000710(int i)
{
    if (i < 8) return D_002243B0[i];
    return 0.0f;
}
