/* LEVEL_05.REL:0x16BCE0 -- gathers a vector out of the two sub-records: the
   +0x8 and +0xC floats of the +0x54 owner and the +0x1C float of the +0x58
   owner, stored at +0x0, +0x8 and +0x4. */
typedef struct {
    unsigned char pad0[8];
    float v_8;
    float v_C;
} SrcA;

typedef struct {
    unsigned char pad0[0x1C];
    float v_1C;
} SrcB;

typedef struct {
    unsigned char pad0[0x54];
    SrcA *p_54;
    SrcB *p_58;
} Rec;

typedef struct {
    float x;
    float y;
    float z;
} Vec;

void func_16BCE0(Rec *a0, Vec *a1)
{
    SrcA *p = a0->p_54;
    SrcB *q = a0->p_58;

    a1->x = p->v_8;
    a1->z = p->v_C;
    a1->y = q->v_1C;
}
