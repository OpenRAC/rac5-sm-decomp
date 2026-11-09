/* LEVEL_10:0x08C098 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_00248434;
extern char D_00220D40[];
extern char *D_001FF274;
void *func_08C098(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_00248434->map != 0)
            index = D_00248434->map[index];
    }
    row = &D_00248434->rows[index];
    if (row->sel == 0xff)
        return D_00220D40;
    return D_001FF274 + row->sel * 0x40;
}
