typedef struct GadgetRecord {
    int pad_00;
    int type;
    char pad_08[0x50];
} GadgetRecord;

/* The 25 gadget records, 0x58 bytes each: +0x00 the internal name, +0x04 the type (1 gadget, 2 weapon,
   3 item), +0x10 eight upgrade-level stat blocks, +0x3C the upgrade level (0..7). */
extern GadgetRecord D_0023C158[];

GadgetRecord *func_024D80(unsigned int slot, int step)
{
    step++;
    if (slot < 25) {
        if (step >= 0) {
            if (step < 2) {
                if (D_0023C158[step + slot].type == 2)
                    return &D_0023C158[slot] + step;
            }
        }
    }
    return 0;
}
