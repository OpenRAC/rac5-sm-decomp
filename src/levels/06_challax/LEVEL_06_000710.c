/* LEVEL_06:0x000710 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_001FA330[];

float func_000710(int set)
{
    if (set < 8) return D_001FA330[set];
    return 0.0f;
}
