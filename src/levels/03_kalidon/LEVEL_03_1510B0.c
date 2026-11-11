/* LEVEL_03.REL:1510B0 -- clears the first halfword, initialises the
   sub-record at 0x48 through func_02E3C8 with the two data blocks, and
   stores 60.0 at 0x80. */
typedef struct {
    short h_00;
    char pad_02[0x7E];
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

extern In D_003ACCAC[];
extern Flt D_003ACA08[];

extern void func_02E3C8(Out *a0, In *a1, Flt *a2, Sample *a3, Sample *t0, float f1, float f2);

void func_1510B0(Obj *a0, Sample *a1, Sample *a2, float f1, float f2)
{
    a0->h_00 = 0;
    func_02E3C8((Out *)((char *)a0 + 0x48), D_003ACCAC, D_003ACA08, a1, a2, f1, f2);
    a0->f_80 = 60.0f;
}
