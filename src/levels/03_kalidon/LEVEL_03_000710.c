/* LEVEL_03:0x000710 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_002243B0[];

float func_000710(int set)
{
    if (set < 8) return D_002243B0[set];
    return 0.0f;
}
