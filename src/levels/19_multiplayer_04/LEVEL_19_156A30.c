/* LEVEL_19.REL:0x156A30 -- asks the ped routine for the weight of the
   caller's move and arms the record unless the move is unknown. */
typedef struct {
    char pad0[0x8];
    int f_08;
    char pad1[0x2C - 0xC];
    float f_2C;
    char pad2[0x4C - 0x30];
    unsigned char f_4C;
} Rec;

typedef struct {
    char pad0[0x24];
    int f_24;
    char pad1[0x28];
} Owner;

typedef struct {
    char pad0[0x40];
    Owner *f_40;
    char pad1[0x14];
    Rec *f_58;
} Obj;

float func_1569B8(int a0);

void func_156A30(Obj *a0, int a1)
{
    Rec *r;

    if (a0->f_40->f_24 != (int)0xECFD0651u) return;
    r = a0->f_58;
    r->f_2C = func_1569B8(a1);
    if (r->f_2C != -1.0f) {
        r->f_08 = a1;
        r->f_4C = 1;
    }
}
