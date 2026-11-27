/* LEVEL_19:0x16B520 -- placement copy of LEVEL_03_1AE2B0.c: polls the object's record: when the poll succeeds it starts the record's item (and finishes the object when no hold is armed), otherwise it releases the held entry once the record is armed. */
typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Item;

typedef struct {
    char pad0[4];
    int w4;
    Item *item8;
    char *wC;
    char pad10[8];
    unsigned char b18;
} Rec;

typedef struct {
    char pad0[0x54];
    Rec *rec;
} Obj;

extern char *func_018440(void);
extern int func_076698(int a, char *b);
extern void func_073660(Obj *o, Item *item, char **slot, int a, int b, int c, int d, int e, float f0, float f1, float f2, float f3);
extern void func_06F9A8(Obj *o);
extern void func_0737C8(char *record);

void func_16B520(Obj *o)
{
    Rec *r = o->rec;
    Item *it;

    if (func_076698(r->w4, func_018440()) != 0) {
        if (r->b18 != 0) {
            if (r->wC == 0) {
                char **slot = &r->wC;

                it = r->item8;
                if (it != 0)
                    func_073660(o, it, slot, 0, 0, 0, 0, 1, it->f14, it->f18, it->f1C, it->f20);
            }
        } else {
            it = r->item8;
            if (it != 0)
                func_073660(o, it, 0, 0, 0, 0, 0, 1, it->f14, it->f18, it->f1C, it->f20);
            ((void (*)(Obj *o, int v))func_06F9A8)(o, 1);
        }
    } else if (r->b18 != 0 && r->wC != 0) {
        func_0737C8(r->wC);
        r->wC = 0;
    }
}
