/* LEVEL_18:0x07CC28 -- placement copy of LEVEL_01_08BD00.c: remaps an index through an optional byte table, then returns a table row address or the default row. */
struct Row { char pad[0x44]; unsigned char sel; char pad2[0xB]; };
struct G { char pad[8]; struct Row *rows; char pad2[8]; unsigned char *map; };
extern struct G *D_001F5834;
extern char D_001CE200[];
extern char *D_001A5724;
void *func_07CC28(unsigned int index, int adjust)
{
    struct Row *row;
    if (adjust != 0) {
        if (D_001F5834->map != 0)
            index = D_001F5834->map[index];
    }
    row = &D_001F5834->rows[index];
    if (row->sel == 0xff)
        return D_001CE200;
    return D_001A5724 + row->sel * 0x40;
}
