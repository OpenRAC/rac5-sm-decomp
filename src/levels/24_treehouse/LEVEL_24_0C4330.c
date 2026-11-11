/* LEVEL_24:0x0C4330 -- placement copy of LEVEL_02_0D1378.c: for one of the four slots, returns the value of
   the current table entry's thing, or -1 when there is none. */
typedef struct {
    char pad[0x14];
    int value;
} Thing;

typedef struct {
    char pad[0x68];
    Thing *thing;
} Entry;

extern int D_001D1EE4;
extern Entry D_001D2198[];

int func_0C4330(unsigned int slot)
{
    Thing *thing;

    if (slot >= 4)
        return -1;
    thing = D_001D2198[D_001D1EE4].thing;
    if (thing == 0)
        return -1;
    return thing->value;
}
