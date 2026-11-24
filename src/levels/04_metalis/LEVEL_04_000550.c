/* LEVEL_04:0x000550 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_00224E30[];
float func_000550(int set)
{
    float r;

    if (set < 8)
        r = D_00224E30[set];
    else
        r = 0.0f;
    return r;
}
