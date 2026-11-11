/* LEVEL_04:0x1A4428 -- clears status bits on two records, seeds a small record, and calls two helpers, the last with floats from a global. */
typedef struct {
    char pad_00[0x64];
    int f_64;
} Obj;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Glob;

typedef struct {
    float f_00;
    void *f_04;
    void *f_08;
} Rec;

extern Glob *D_003AFF68;
extern void func_07FAE8(void *a0, int a1);
extern void func_083F98(void *a0);
extern void func_085C30(Obj *a0, int a1, int a2);
extern void func_083E30(Obj *a0, Glob *a1, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);

void func_1A4428(Obj *a0, Obj *a1, Rec *a2)
{
    int m800;
    int m40;

    m800 = ~0x800;
    m40 = ~0x40;
    a0->f_64 = (a0->f_64 & m800) & m40;
    a1->f_64 = a1->f_64 & m40;
    a2->f_00 = 30.0f;
    func_07FAE8(a2->f_04, 1);
    a2->f_04 = 0;
    func_083F98(a2->f_08);
    a2->f_08 = 0;
    func_085C30(a0, 0, 0);
    if (D_003AFF68 != 0) {
        func_083E30(a0, D_003AFF68, 0, 0, 0, 0, 0, 1, D_003AFF68->f_14, D_003AFF68->f_18, D_003AFF68->f_1C, D_003AFF68->f_20);
    }
}
