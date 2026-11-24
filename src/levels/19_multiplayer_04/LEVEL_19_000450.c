/* LEVEL_19:0x000450 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_001C1630[];
float func_000450(int set)
{
    float r;

    if (set < 8)
        r = D_001C1630[set];
    else
        r = 0.0f;
    return r;
}
