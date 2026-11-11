/* LEVEL_03:0x08BB20 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_00259EB4;
extern char D_00230CC0[];
extern char *D_0020E8F4;
void *func_08BB20(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_00259EB4->map != 0)
            index = D_00259EB4->map[index];
    }
    row = &D_00259EB4->rows[index];
    if (row->sel == 0xff)
        return D_00230CC0;
    return D_0020E8F4 + row->sel * 0x40;
}
