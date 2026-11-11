/* LEVEL_09:0x088680 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_002267B4;
extern char D_002019C0[];
extern char *D_001E0074;
void *func_088680(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_002267B4->map != 0)
            index = D_002267B4->map[index];
    }
    row = &D_002267B4->rows[index];
    if (row->sel == 0xff)
        return D_002019C0;
    return D_001E0074 + row->sel * 0x40;
}
