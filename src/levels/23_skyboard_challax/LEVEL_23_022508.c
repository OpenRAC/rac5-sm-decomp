typedef struct {
    char earlier[0x3c];
    int level;
    char later[0x18];
} GadgetRecord;

/* The 25 gadget records, 0x58 bytes each: +0x00 the internal name, +0x04 the type (1 gadget, 2 weapon,
   3 item), +0x10 eight upgrade-level stat blocks, +0x3C the upgrade level (0..7). */
extern GadgetRecord D_001C69D8[];

int func_022508(unsigned int slot, unsigned int level, int index)
{
    index++;
    if (slot < 25 && level < 8 && index >= 0 && index < 2) {
        D_001C69D8[index + slot].level = level;
        return 1;
    }
    return 0;
}
