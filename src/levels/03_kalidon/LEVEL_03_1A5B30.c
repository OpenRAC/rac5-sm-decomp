/* LEVEL_03.REL:0x1A5B30 -- carries the vector's +0x0 and +0x8 floats onto the
   +0x14 and +0x18 slots of the +0x54 owner, then calls func_1A4B98 with 5. */
typedef struct {
    unsigned char pad0[0x14];
    float v_14;
    float v_18;
} Obj;

typedef struct {
    unsigned char pad0[0x54];
    Obj *p_54;
} Rec;

typedef struct {
    float x;
    float y;
    float z;
} Vec;

extern void func_1A4B98(Rec *a0, int mode);

void func_1A5B30(Rec *a0, Vec *a1)
{
    Obj *p = a0->p_54;

    p->v_14 = a1->x;
    p->v_18 = a1->z;
    func_1A4B98(a0, 5);
}
