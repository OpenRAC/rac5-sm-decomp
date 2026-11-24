/* LEVEL_08:0x000710 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_00255130[];

float func_000710(int set)
{
    if (set >= 8) {
        return 0.0f;
    }
    return D_00255130[set];
}
