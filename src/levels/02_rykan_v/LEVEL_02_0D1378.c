/* LEVEL_02:0x0D1378 -- for one of the four slots, returns the value of
   the current table entry's thing, or -1 when there is none. */
typedef struct {
    char pad[0x14];
    int value;
} Thing;

typedef struct {
    char pad[0x68];
    Thing *thing;
} Entry;

extern int D_00216224;
extern Entry D_002164D8[];

int func_0D1378(unsigned int slot)
{
    Thing *thing;

    if (slot >= 4)
        return -1;
    thing = D_002164D8[D_00216224].thing;
    if (thing == 0)
        return -1;
    return thing->value;
}
