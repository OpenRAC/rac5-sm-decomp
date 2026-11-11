/* LEVEL_02:0x16B768 -- starts func_1698B8 with mode 0x14 for the object's type byte unless it is 0, 0x17 or 0x18; returns whether it did. */
typedef struct {
    char pad00[0x45];
    unsigned char type;
} Obj;

extern void func_1698B8(Obj *o, int type, int mode);

int func_16B768(Obj *o)
{
    if ((unsigned char)(o->type - 0x17) < 2)
        return 0;
    if (o->type == 0)
        return 0;
    func_1698B8(o, o->type, 0x14);
    return 1;
}
