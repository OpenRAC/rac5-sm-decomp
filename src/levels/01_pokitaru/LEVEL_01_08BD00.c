/* LEVEL_01:0x08BD00 -- remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_0023F034;
extern char D_00217DC0[];
extern char *D_001F6274;
void *func_08BD00(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_0023F034->map != 0)
            index = D_0023F034->map[index];
    }
    row = &D_0023F034->rows[index];
    if (row->sel == 0xff)
        return D_00217DC0;
    return D_001F6274 + row->sel * 0x40;
}
