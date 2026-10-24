/* variant B: float first in a local */
typedef struct {
    char pad_00[0x10];
    float f_10;
    int f_14;
    char pad_18[0x4];
    int f_1C;
    int f_20;
    char pad_24[0x18];
    int f_3C;
    unsigned char f_40;
    unsigned char f_41;
    unsigned char f_42;
} Data;

typedef struct {
    char pad_00[0x45];
    unsigned char f_45;
    char pad_46[0x12];
    Data *p;
} Obj;

extern float D_001D5F50[];

void func_158B60(Obj *a0, int a1)
{
    float v = D_001D5F50[a1];
    Data *d = a0->p;

    d->f_41 = a1;
    d->f_10 = v;
    d->f_14 = 0;
    d->f_1C = 0;
    d->f_20 = 0;
    d->f_3C = 0;
    d->f_42 = 1;
    a0->f_45 = 1;
}
