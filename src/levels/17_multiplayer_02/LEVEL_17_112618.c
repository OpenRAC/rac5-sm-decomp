/* LEVEL_17:0x112618 -- placement copy of LEVEL_16_112E88.c: clears the eight slots, then refills those whose entry in the current row reports state 1. */
struct Ent {
    char pad[0x50];
    int state;
};
struct Obj {
    char pad[0xF8];
    int ctx;
};
extern int D_001C3920;
extern int D_001A8228;
extern unsigned int D_001AB678[][3][8];
extern int func_024E48(int i, int v, int ctx);
extern struct Ent *func_021A48(int v, int ctx);

void func_112618(struct Obj *obj)
{
    int level;
    unsigned int *row;
    unsigned int i;
    unsigned int j;
    int ctx;

    if (D_001C3920 == 0x14)
        return;
    level = D_001C3920 - 16;
    row = D_001AB678[level][D_001A8228];
    ctx = obj->ctx;
    for (i = 0; i < 8; i++)
        func_024E48(i, 0, ctx);
    for (j = 0; j < 8; j++) {
        if (func_021A48(row[j], ctx)->state == 1)
            func_024E48(j, row[j], ctx);
    }
}
