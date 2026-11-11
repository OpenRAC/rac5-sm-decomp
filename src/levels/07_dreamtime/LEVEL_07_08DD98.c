/* LEVEL_07:0x08DD98 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_00254934;
extern char D_0022CAC0[];
extern char *D_0020A574;
void *func_08DD98(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_00254934->map != 0)
            index = D_00254934->map[index];
    }
    row = &D_00254934->rows[index];
    if (row->sel == 0xff)
        return D_0022CAC0;
    return D_0020A574 + row->sel * 0x40;
}
