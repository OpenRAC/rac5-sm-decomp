/* LEVEL_06:0x084B40 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_0022BDB4;
extern char D_00206C40[];
extern char *D_001E5174;
void *func_084B40(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_0022BDB4->map != 0)
            index = D_0022BDB4->map[index];
    }
    row = &D_0022BDB4->rows[index];
    if (row->sel == 0xff)
        return D_00206C40;
    return D_001E5174 + row->sel * 0x40;
}
