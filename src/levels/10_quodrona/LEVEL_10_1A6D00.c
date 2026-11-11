/* LEVEL_10:0x1A6D00 -- switches an object's mode and performs per-mode setup. */
typedef struct {
    char pad0[8];
    float f8;
} Sub;
typedef struct {
    char pad0[0x45];
    unsigned char mode;
    unsigned char b46;
    char pad47;
    Sub *sub;
    char pad4C[0x70 - 0x4C];
    float f70;
} Obj;
extern void func_07D358(Obj *o, int k, int z, int one, float a, float b);

void func_1A6D00(Obj *o, int m)
{
    unsigned char mm;

    mm = m;
    switch (mm) {
    case 1:
        func_07D358(o, 1, 0, 1, 0.15f, 0.0f);
        o->b46 = 0;
        o->f70 = 15.0f;
        break;
    case 2:
        func_07D358(o, 2, 0, 1, 0.15f, 0.0f);
        break;
    case 3:
        func_07D358(o, 3, 0, 1, 0.15f, 0.0f);
        o->sub->f8 = 0.5f;
        o->f70 = 15.0f;
        o->b46 = 0;
        break;
    case 4:
        func_07D358(o, 4, 0, 1, 0.15f, 0.0f);
        o->sub->f8 = 0.5f;
        o->f70 = 15.0f;
        o->b46 = 0;
        break;
    }
    o->mode = mm;
}
