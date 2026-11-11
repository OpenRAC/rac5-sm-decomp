/* LEVEL_21:0x0703A8 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_001870B4;
extern char D_0016C540[];
extern char *D_0014AEF4;
void *func_0703A8(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_001870B4->map != 0)
            index = D_001870B4->map[index];
    }
    row = &D_001870B4->rows[index];
    if (row->sel == 0xff)
        return D_0016C540;
    return D_0014AEF4 + row->sel * 0x40;
}
