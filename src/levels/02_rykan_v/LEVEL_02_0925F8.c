/* LEVEL_02:0x0925F8 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_00256534;
extern char D_0022CD40[];
extern char *D_0020B234;
void *func_0925F8(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_00256534->map != 0)
            index = D_00256534->map[index];
    }
    row = &D_00256534->rows[index];
    if (row->sel == 0xff)
        return D_0022CD40;
    return D_0020B234 + row->sel * 0x40;
}
