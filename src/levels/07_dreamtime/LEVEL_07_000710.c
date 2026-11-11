/* LEVEL_07:0x000710 -- returns one of the eight shared slots, or zero when
   the index is out of range. */
extern float D_002201B0[];

float func_000710(int i)
{
    if (i >= 8)
        return 0.0f;
    return D_002201B0[i];
}
