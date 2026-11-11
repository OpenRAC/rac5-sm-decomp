typedef struct {
    int f_00;
    int f_04;
} Base;

typedef struct {
    char pad0[0x40];
    Base *f_40;
    unsigned char f_44;
} Rec;

typedef struct {
    char pad0[0x10];
    float f_10;
} Inner;

typedef struct {
    char pad0[0x1C];
    Inner *f_1C;
} Obj;

extern void *func_070370(void *a0, int a1);

void func_061CB0(Rec *a0, float *dst, void *a2)
{
    float *p = func_070370(a2, 1);
    float *q = p + 0x0C;
    float a;
    float b;
    float c;
    float scale;
    unsigned char idx;
    Base *base;
    int entry;
    Obj *obj;

    dst[0] = a = q[0];
    dst[1] = b = q[1];
    dst[2] = c = q[2];

    idx = a0->f_44;
    base = a0->f_40;
    entry = idx * 0x34 + base->f_04;
    obj = *(Obj **)(entry + 4);
    scale = obj->f_1C->f_10;

    a = a * scale;
    b = b * scale;
    c = c * scale;
    dst[0] = a;
    dst[1] = b;
    dst[2] = c;
}
