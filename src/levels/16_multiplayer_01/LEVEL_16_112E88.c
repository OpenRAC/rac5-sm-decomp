/* LEVEL_16:0x112E88 -- clears the eight slots, then refills those whose entry in the current row reports state 1. */
struct Ent {
    char pad[0x50];
    int state;
};
struct Obj {
    char pad[0xF8];
    int ctx;
};
extern int D_001D04A0;
extern int D_001B4C28;
extern unsigned int D_001B8078[][3][8];
extern int func_0254C8(int i, int v, int ctx);
extern struct Ent *func_0220C8(int v, int ctx);

void func_112E88(struct Obj *obj)
{
    int level;
    unsigned int *row;
    unsigned int i;
    unsigned int j;
    int ctx;

    if (D_001D04A0 == 0x14)
        return;
    level = D_001D04A0 - 16;
    row = D_001B8078[level][D_001B4C28];
    ctx = obj->ctx;
    for (i = 0; i < 8; i++)
        func_0254C8(i, 0, ctx);
    for (j = 0; j < 8; j++) {
        if (func_0220C8(row[j], ctx)->state == 1)
            func_0254C8(j, row[j], ctx);
    }
}
