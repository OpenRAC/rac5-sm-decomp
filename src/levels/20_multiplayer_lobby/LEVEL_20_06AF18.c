/* LEVEL_20:0x06AF18 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_00148D34;
extern char D_0012DD00[];
extern char *D_00106984;
void *func_06AF18(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_00148D34->map != 0)
            index = D_00148D34->map[index];
    }
    row = &D_00148D34->rows[index];
    if (row->sel == 0xff)
        return D_0012DD00;
    return D_00106984 + row->sel * 0x40;
}
