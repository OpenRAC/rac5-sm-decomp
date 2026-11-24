/* LEVEL_24:0x000550 -- returns the armour defence of an armour set: the damage reduction of each of
   the eight sets (set 0 is no armour), zero past the eighth. */
extern float D_001DC230[];

float func_000550(int set)
{
    return set < 8 ? D_001DC230[set] : 0.0f;
}
