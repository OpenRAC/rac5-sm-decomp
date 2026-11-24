/* The 25 gadget records, 0x58 bytes each: +0x00 the internal name, +0x04 the type (1 gadget, 2 weapon,
   3 item), +0x10 eight upgrade-level stat blocks, +0x3C the upgrade level (0..7). */
extern int D_00152958[];

int func_01F460(int slot, int y)
{
    int k = y + 1;

    if ((unsigned int)slot < 0x19 && k >= 0 && k < 2)
        return slot * 0x58 + (int)D_00152958 + k * 0x58;
    return 0;
}
