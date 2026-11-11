typedef struct {
    short  f0;
    char   pad[0x7E];
    float  f80;
} Obj;

typedef struct {
    float x;
    float y;
    int z;
} Sample;

typedef struct {
    char flag0;
    char flag1;
    unsigned short count;
    Sample s1;
    Sample s2;
    float f1;
    float f2;
    float f3;
} Out;

typedef struct {
    char pad[0x28];
    unsigned short count;
} In;

typedef struct {
    float pad[11];
    float v2c;
    float pad2[8];
    float v50;
} Flt;

extern In D_0037955C[];
extern Flt D_003792B8[];

extern void func_02D438(Out *a0, In *a1, Flt *a2, Sample *a3, Sample *t0, float f1, float f2);

void func_14AC00(Obj *o, Sample *a, Sample *b, float f1, float f2)
{
    o->f0 = 0;
    func_02D438((Out *)((char *)o + 0x48), D_0037955C, D_003792B8, a, b, f1, f2);
    o->f80 = 60.0f;
}
