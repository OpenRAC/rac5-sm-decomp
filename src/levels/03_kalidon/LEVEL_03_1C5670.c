/* LEVEL_03:0x1C5670 -- sets a mode byte and fires an effect when the timer is expired. */
typedef struct Info { char pad[0x14]; float f14; float f18; float f1C; float f20; } Info;
typedef struct Sub { char pad[0xD4]; float fD4; char pad2[0x105 - 0xD8]; unsigned char b105; } Sub;
typedef struct Obj { char pad[0x58]; Sub *p58; } Obj;
extern Info *D_003B3454;
extern Info *D_003B3450;
extern void func_0807B0(Obj *o, Info *i, int e, int f, int g, int h, int j, int k, float a, float b, float c, float d);
static __inline__ void Fire(Obj *self, Info *p)
{
    if (p != 0)
        func_0807B0(self, p, 0, 0, 0, 0, 0, 1, p->f14, p->f18, p->f1C, p->f20);
}

void func_1C5670(Obj *self, unsigned char x, unsigned char mode)
{
    Sub *o = self->p58;

    switch (mode) {
    case 0:
        break;
    case 2:
        if (x < 2 && o->fD4 <= 0.0f) {
            Fire(self, D_003B3454);
            o->fD4 = 30.0f;
        }
        break;
    case 1:
        if (x == 2 && o->fD4 <= 0.0f) {
            Fire(self, D_003B3450);
            o->fD4 = 30.0f;
        }
        break;
    }
    o->b105 = mode;
}
