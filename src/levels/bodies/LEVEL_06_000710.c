/* LEVEL_06.REL:0x000710 -- reads one entry of the eight-float table, or
   zero past its end. */
extern float D_001FA330[];

float func_000710(int i)
{
    if (i < 8) return D_001FA330[i];
    return 0.0f;
}
