/* LEVEL_08:0x1C0BB0 -- state handler: unless the linked record is busy or the object is in state 0x14/0x15, forwards the object to the transition helper, or (when the target is in state 2) clears it and runs the full transfer with the record's fields. */
typedef struct Obj Obj;
typedef struct Link { char pad00[0x2C]; int w2C; Obj *f30; int w34; char pad38[8]; int w40; int w44; int w48; } Link;
struct Obj { char pad00[0x45]; unsigned char b45; char pad46[0xE]; Link *f54; };
extern void func_0845F8(char *a0, int a1);
extern void func_1C1258(Obj *o, int code, int n);
extern void func_1994C0(Obj *o, Link *l, Obj *t, int a, int b, int c, int d);
void func_1C0BB0(Obj *o)
{
    Link *l = o->f54;
    if (l->w34 != 0) return;
    if (o->b45 == 0x14) return;
    if (o->b45 == 0x15) return;
    if ((l->f30->b45 ^ 2) != 0) {
        func_1C1258(o, o->b45, 0x10);
        return;
    }
    func_0845F8((char *)o, 0);
    func_1994C0(o, l, l->f30, l->w2C, l->w40, l->w44, l->w48);
}
