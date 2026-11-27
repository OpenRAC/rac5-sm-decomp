/* LEVEL_20:0x0E59F8 -- placement copy of LEVEL_16_112E88.c: clears the eight slots, then refills those whose entry in the current row reports state 1. */
struct Ent {
    char pad[0x50];
    int state;
};
struct Obj {
    char pad[0xF8];
    int ctx;
};
extern int D_00131510;
extern int D_001172E8;
extern unsigned int D_0011A738[][3][8];
extern int func_022040(int i, int v, int ctx);
extern struct Ent *func_01EDC8(int v, int ctx);

void func_0E59F8(struct Obj *obj)
{
    int level;
    unsigned int *row;
    unsigned int i;
    unsigned int j;
    int ctx;

    if (D_00131510 == 0x14)
        return;
    level = D_00131510 - 16;
    row = D_0011A738[level][D_001172E8];
    ctx = obj->ctx;
    for (i = 0; i < 8; i++)
        func_022040(i, 0, ctx);
    for (j = 0; j < 8; j++) {
        if (func_01EDC8(row[j], ctx)->state == 1)
            func_022040(j, row[j], ctx);
    }
}
