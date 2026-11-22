/* LEVEL_07:0x1AD350 -- placement copy of LEVEL_03_1AE2B0.c: polls the object's record: when the poll succeeds it starts the record's item (and finishes the object when no hold is armed), otherwise it releases the held entry once the record is armed. */
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

extern char *func_01AA20(void);
extern int func_086800(int a, char *b);
extern void func_082B38(Obj *o, Item *item, char **slot, int a, int b, int c, int d, int e, float f0, float f1, float f2, float f3);
extern void func_07E7F0(Obj *o, int v);
extern void func_082CA0(char *record);

void func_1AD350(Obj *o)
{
    Rec *r = o->rec;
    Item *it;

    if (func_086800(r->w4, func_01AA20()) != 0) {
        if (r->b18 != 0) {
            if (r->wC == 0) {
                char **slot = &r->wC;

                it = r->item8;
                if (it != 0)
                    func_082B38(o, it, slot, 0, 0, 0, 0, 1, it->f14, it->f18, it->f1C, it->f20);
            }
        } else {
            it = r->item8;
            if (it != 0)
                func_082B38(o, it, 0, 0, 0, 0, 0, 1, it->f14, it->f18, it->f1C, it->f20);
            func_07E7F0(o, 1);
        }
    } else if (r->b18 != 0 && r->wC != 0) {
        func_082CA0(r->wC);
        r->wC = 0;
    }
}
