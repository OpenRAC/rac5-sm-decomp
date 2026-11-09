/* LEVEL_19:0x07D790 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_001F5634;
extern char D_001CDE80[];
extern char *D_001A5424;
void *func_07D790(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_001F5634->map != 0)
            index = D_001F5634->map[index];
    }
    row = &D_001F5634->rows[index];
    if (row->sel == 0xff)
        return D_001CDE80;
    return D_001A5424 + row->sel * 0x40;
}
