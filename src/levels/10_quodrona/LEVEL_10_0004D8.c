/* LEVEL_10:0x0004D8 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_00214430[];

float func_0004D8(int set)
{
    if (set >= 8)
        return 0.0f;
    return D_00214430[set];
}
