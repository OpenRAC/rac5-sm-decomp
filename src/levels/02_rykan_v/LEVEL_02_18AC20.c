/* LEVEL_02:0x18AC20 -- registers the object with the shared effect when one is set, spawns its marker, finishes it and counts the object when the progress block is armed. */
typedef struct Obj Obj;

typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Info;

typedef struct {
    char pad0[9];
    unsigned char b09;
    char pad0A[3];
    unsigned char b0D;
} Progress;

extern Info *D_0021CB10;
extern Progress D_00248430;

extern void func_0872A0(Obj *o, Info *info, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_0F5AE0(unsigned int index, float *pos);
extern void func_18ACB8(Obj *o, int mode);

int func_18AC20(Obj *o)
{
    Info *info = D_0021CB10;
    Progress *p;

    if (info != 0) {
        func_0872A0(o, info, info->f14, info->f18, info->f1C, info->f20, 0, 0, 0, 0, 0, 1);
    }
    func_0F5AE0(1, (float *)((char *)o + 0x30));
    func_18ACB8(o, 7);
    p = &D_00248430;
    if (p->b0D == 1) {
        p->b09 = p->b09 + 1;
    }
    return 3;
}
