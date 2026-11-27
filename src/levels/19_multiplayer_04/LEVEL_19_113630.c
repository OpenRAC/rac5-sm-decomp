/* LEVEL_19:0x113630 -- placement copy of LEVEL_16_112E88.c: clears the eight slots, then refills those whose entry in the current row reports state 1. */
struct Ent {
    char pad[0x50];
    int state;
};
struct Obj {
    char pad[0xF8];
    int ctx;
};
extern int D_001D16A0;
extern int D_001B5DA8;
extern unsigned int D_001B91F8[][3][8];
extern int func_025070(int i, int v, int ctx);
extern struct Ent *func_021D08(int v, int ctx);

void func_113630(struct Obj *obj)
{
    int level;
    unsigned int *row;
    unsigned int i;
    unsigned int j;
    int ctx;

    if (D_001D16A0 == 0x14)
        return;
    level = D_001D16A0 - 16;
    row = D_001B91F8[level][D_001B5DA8];
    ctx = obj->ctx;
    for (i = 0; i < 8; i++)
        func_025070(i, 0, ctx);
    for (j = 0; j < 8; j++) {
        if (func_021D08(row[j], ctx)->state == 1)
            func_025070(j, row[j], ctx);
    }
}
