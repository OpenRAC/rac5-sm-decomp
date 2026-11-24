/* LEVEL_09:0x023858 -- placement copy of LEVEL_01_024560.c: reports whether the neighbouring weapon record (type 2) has reached upgrade level 4. */
typedef struct GadgetRecord {
    int pad_00;
    int type;
    char pad_08[0x34];
    unsigned int level;
    char pad_40[0x18];
} GadgetRecord;

/* The 25 gadget records, 0x58 bytes each: +0x00 the internal name, +0x04 the type (1 gadget, 2 weapon,
   3 item), +0x10 eight upgrade-level stat blocks, +0x3C the upgrade level (0..7). */
extern GadgetRecord D_001DD3D8[];

int func_023858(unsigned int slot, int step)
{
    step++;
    if (slot < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_001DD3D8[step + slot].type == 2)
                    return D_001DD3D8[step + slot].level >= 4;
            }
        }
    }
    return 0;
}
