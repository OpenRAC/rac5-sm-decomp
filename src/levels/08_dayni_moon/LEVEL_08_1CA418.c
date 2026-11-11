/* LEVEL_08:0x1CA418 -- initialises the object's data record: link pointer, two cleared words and the byte at +0x30, and copies the object's 4x4 matrix into the record (rows 2 first, then 0, 1 and 3). */
typedef struct M {
    float f[16];
} M;

typedef struct Rec {
    char *link;
    int w4;
    char pad_08[0x30 - 0x08];
    unsigned char b30;
    char pad_31[3];
    M m;
    int w74;
} Rec;

typedef struct Obj {
    M m;
    char pad_40[0x58 - 0x40];
    Rec *rec;
} Obj;

extern char D_002725C0[];

int func_1CA418(Obj *a0)
{
    Rec *r;
    M *dst;

    r = a0->rec;
    r->link = D_002725C0;
    dst = &r->m;
    r->w4 = 0;
    r->w74 = 0;
    dst->f[8] = a0->m.f[8];
    dst->f[9] = a0->m.f[9];
    dst->f[10] = a0->m.f[10];
    dst->f[11] = a0->m.f[11];
    dst->f[0] = a0->m.f[0];
    dst->f[1] = a0->m.f[1];
    dst->f[2] = a0->m.f[2];
    dst->f[3] = a0->m.f[3];
    dst->f[4] = a0->m.f[4];
    dst->f[5] = a0->m.f[5];
    dst->f[6] = a0->m.f[6];
    dst->f[7] = a0->m.f[7];
    dst->f[12] = a0->m.f[12];
    dst->f[13] = a0->m.f[13];
    dst->f[14] = a0->m.f[14];
    dst->f[15] = a0->m.f[15];
    r->b30 = 0;
    return 1;
}
