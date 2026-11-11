/* LEVEL_24:0x084F68 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_0020AF34;
extern char D_001E8B40[];
extern char *D_001C6EF4;
void *func_084F68(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_0020AF34->map != 0)
            index = D_0020AF34->map[index];
    }
    row = &D_0020AF34->rows[index];
    if (row->sel == 0xff)
        return D_001E8B40;
    return D_001C6EF4 + row->sel * 0x40;
}
