/* LEVEL_08.REL:0x1C3B48 -- when the +0x40 owner still carries the 0xECFD0651
   tag, evaluates func_1C3AD0 on the argument, parks the result at +0x2C of the
   +0x58 owner and, unless it came back as -1.0, records the argument at +0x8
   and raises the +0x4C byte. */
typedef struct {
    unsigned char pad0[0x24];
    int tag_24;
} Owner;

typedef struct {
    unsigned char pad0[8];
    void *p_8;
    unsigned char pad1[0x2C - 0x0C];
    float f_2C;
    unsigned char pad2[0x4C - 0x30];
    unsigned char b_4C;
} Obj;

typedef struct {
    unsigned char pad0[0x40];
    Owner *p_40;
    unsigned char pad1[0x14];
    Obj *p_58;
} Rec;

extern float func_1C3AD0(void *a0);

void func_1C3B48(Rec *a0, void *a1)
{
    Owner *owner = a0->p_40;

    if (owner->tag_24 == 0xECFD0651) {
        Obj *p = a0->p_58;
        float r = func_1C3AD0(a1);

        p->f_2C = r;
        if (r != -1.0f) {
            p->p_8 = a1;
            p->b_4C = 1;
        }
    }
}
