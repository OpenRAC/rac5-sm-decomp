/* LEVEL_04:0x15E370 -- arms the object's two sub-lists with a minute timer. */
typedef struct {
    char pad[0x80];
    float f_80;
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

extern In D_003AC59C[];
extern Flt D_003AC2F8[];

extern void func_02E278(Out *a0, In *a1, Flt *a2, Sample *a3, Sample *t0, float f1, float f2);

void func_15E370(Obj *a0, Sample *a1, Sample *a2, float f1, float f2)
{
    *(short *)a0 = 0;
    func_02E278((Out *)((char *)a0 + 0x48), D_003AC59C, D_003AC2F8, a1, a2, f1, f2);
    a0->f_80 = 60.0f;
}
