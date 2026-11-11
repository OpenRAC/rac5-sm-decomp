/* LEVEL_22:0x07D0E0 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_00194C34;
extern char D_00175240[];
extern char *D_001555F4;
void *func_07D0E0(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_00194C34->map != 0)
            index = D_00194C34->map[index];
    }
    row = &D_00194C34->rows[index];
    if (row->sel == 0xff)
        return D_00175240;
    return D_001555F4 + row->sel * 0x40;
}
