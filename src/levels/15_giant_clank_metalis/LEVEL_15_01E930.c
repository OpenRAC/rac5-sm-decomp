/* LEVEL_15:0x01E930 -- placement copy of LEVEL_01_0245C8.c: returns the address of one item record (type 3) for a valid slot and step, else 0. */
typedef struct { int a; int type; char pad[0x50]; } GadgetRecord;
/* The 25 gadget records, 0x58 bytes each: +0x00 the internal name, +0x04 the type (1 gadget, 2 weapon,
   3 item), +0x10 eight upgrade-level stat blocks, +0x3C the upgrade level (0..7). */
extern GadgetRecord D_00148258[];

GadgetRecord *func_01E930(unsigned int slot, int kind)
{
    int step = kind + 1;
    if (slot < 25 && step >= 0 && step < 2) {
        if (D_00148258[step + slot].type == 3)
            return &D_00148258[slot] + step;
    }
    return 0;
}
