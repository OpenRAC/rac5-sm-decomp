/* LEVEL_08:0x0D5990 -- placement copy of LEVEL_02_0D1378.c: for one of the four slots, returns the value of
   the current table entry's thing, or -1 when there is none. */
typedef struct {
    char pad[0x14];
    int value;
} Thing;

typedef struct {
    char pad[0x68];
    Thing *thing;
} Entry;

extern int D_0024A124;
extern Entry D_0024A3D8[];

int func_0D5990(unsigned int slot)
{
    Thing *thing;

    if (slot >= 4)
        return -1;
    thing = D_0024A3D8[D_0024A124].thing;
    if (thing == 0)
        return -1;
    return thing->value;
}
