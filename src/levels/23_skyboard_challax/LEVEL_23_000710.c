/* LEVEL_23.REL:0x000710 -- reads one entry of the eight-float table, or
   zero past its end. */
extern float D_001DE630[];

float func_000710(int i)
{
    if (i < 8) return D_001DE630[i];
    return 0.0f;
}
