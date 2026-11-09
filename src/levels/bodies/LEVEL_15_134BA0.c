/* LEVEL_15:0x134BA0 -- installs a callback and a label pointer in an object, then resets three globals. */
typedef struct { char pad[0xdc]; void *cb; char *label; } Sub;
typedef struct { char pad[0x48]; Sub *sub; } Obj;
extern struct G {
    Obj *obj;
    char pad[0x13C - 4];
    int f13c;
    int f140;
    int f144;
} D_002F4F88;
extern void func_001349B8(void);
extern char D_00134B68[];
void func_134BA0(void)
{
    Obj *o = D_002F4F88.obj;
    o->sub->cb = (void *)func_001349B8;
    o->sub->label = D_00134B68;
    D_002F4F88.f13c = -1;
    D_002F4F88.f140 = -1;
    D_002F4F88.f144 = 0;
}
