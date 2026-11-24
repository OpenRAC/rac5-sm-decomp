/* LEVEL_16:0x000450 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_001C0430[];
float func_000450(int set)
{
    if (set < 8) {
        return D_001C0430[set];
    }
    return 0.0f;
}
