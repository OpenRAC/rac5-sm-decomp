/* LEVEL_08:0x093E30 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_0028E2B4;
extern char D_00261A40[];
extern char *D_0023F134;
void *func_093E30(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_0028E2B4->map != 0)
            index = D_0028E2B4->map[index];
    }
    row = &D_0028E2B4->rows[index];
    if (row->sel == 0xff)
        return D_00261A40;
    return D_0023F134 + row->sel * 0x40;
}
