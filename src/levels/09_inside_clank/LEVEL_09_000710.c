/* LEVEL_09:0x000710 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_001F50B0[];

float func_000710(int set)
{
    return set < 8 ? D_001F50B0[set] : 0.0f;
}
