/* LEVEL_16:0x161720 -- integrates the object's vertical speed, flags a helper while it moves, and calls a fallback when the new height drops below -30. */

typedef struct {
    char pad0[0x30];
    float x30;
    float y34;
    char pad1[0x44];
    float f7C;
    char pad2[0x4];
    unsigned short u84;
    unsigned short u86;
    unsigned short u88;
    unsigned short u8A;
    unsigned short u8C;
    unsigned short u8E;
    unsigned short u90;
} Sub;

typedef struct {
    char pad0[0xC];
    unsigned short u0C;
} Sub2;

typedef struct {
    char pad0[0x58];
    Sub *sub58;
} Obj;

void func_06F940(Obj *o, int a);
int func_013A40(void *p, int a, int b, float f);

int func_161720(Obj *o, float f12)
{
    Sub *s;
    Sub2 *q;
    float f0;
    float f1;
    float f2;
    int r;

    s = o->sub58;
    f2 = f12 * -3.0f;
    f0 = s->f7C + f2;
    s->f7C = f0;
    f1 = s->y34 + f0 * f12;
    s->y34 = f1;
    if (f1 < -30.0f) {
        func_06F940(o, 1);
        return 0;
    }
    q = (Sub2 *)((char *)s + 0x84);
    q->u0C = q->u0C | 8;
    r = func_013A40((char *)s + 0x30, 0, 1, 0.4f);
    q->u0C = q->u0C & 0xFFF7;
    return r;
}
