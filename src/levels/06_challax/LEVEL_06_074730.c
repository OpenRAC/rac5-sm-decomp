/* LEVEL_06:0x074730 -- placement copy of LEVEL_04_07DFB0.c: refreshes packed tags of three slots and the cos/sin pair of an angle. */
typedef struct {
    int idx;
    unsigned int word;
    char pad8[0x14];
} Slot;

typedef struct {
    char pad0[0x14];
    float angle;
    char pad18[0x10];
    Slot slot[3];
    char pad7C[8];
    float cosv;
    float sinv;
} Obj;

extern int D_00284B40[];
extern float cosf(float x);
extern float sqrtf(float x);

void func_074730(void *unused, Obj *o)
{
    int i;
    float a, c, s;

    for (i = 0; i < 3; i++) {
        unsigned int w = o->slot[i].word;
        w = (w & 0xF800FFFF) | (D_00284B40[o->slot[i].idx] << 16);
        w = (w & 0xFFFFFFC3) | 0x10;
        w = (w & 0xFFFFFFFC) | 1;
        o->slot[i].word = w;
    }
    a = o->angle;
    c = cosf(a);
    s = sqrtf(1.0f - c * c);
    if (a < 0.0f)
        s = -s;
    o->cosv = c;
    o->sinv = s;
}
