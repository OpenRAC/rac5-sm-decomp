/* LEVEL_01:0x0245C8 -- returns the address of one item record (type 3) for a valid slot and step, else 0. */
typedef struct { int a; int type; char pad[0x50]; } GadgetRecord;
/* The 25 gadget records, 0x58 bytes each: +0x00 the internal name, +0x04 the type (1 gadget, 2 weapon,
   3 item), +0x10 eight upgrade-level stat blocks, +0x3C the upgrade level (0..7). */
extern GadgetRecord D_001F35D8[];

GadgetRecord *func_0245C8(unsigned int slot, int kind)
{
    int step = kind + 1;
    if (slot < 25 && step >= 0 && step < 2) {
        if (D_001F35D8[step + slot].type == 3)
            return &D_001F35D8[slot] + step;
    }
    return 0;
}
