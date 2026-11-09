/* LEVEL_17:0x07DD20 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_001E67B4;
extern char D_001C0100[];
extern char *D_001978A4;
void *func_07DD20(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_001E67B4->map != 0)
            index = D_001E67B4->map[index];
    }
    row = &D_001E67B4->rows[index];
    if (row->sel == 0xff)
        return D_001C0100;
    return D_001978A4 + row->sel * 0x40;
}
