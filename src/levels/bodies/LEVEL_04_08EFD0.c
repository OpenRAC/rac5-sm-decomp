/* LEVEL_04:0x08EFD0 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_00259834;
extern char D_00231740[];
extern char *D_0020F734;
void *func_08EFD0(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_00259834->map != 0)
            index = D_00259834->map[index];
    }
    row = &D_00259834->rows[index];
    if (row->sel == 0xff)
        return D_00231740;
    return D_0020F734 + row->sel * 0x40;
}
