/* LEVEL_05.REL:0x16BCB8 -- lays the frame's three floats into the linked pair. */
typedef struct { float f_00; float f_04; float f_08; } Node;
typedef struct { char pad[0x18]; float f_18; } Cb;
typedef struct { char pad[0x54]; Node *f_54; Cb *f_58; } Obj;
typedef struct { float x; float y; float z; } Vec3;
void func_16BCB8(Obj *a0, Vec3 *a1)
{
    Node *p = a0->f_54;
    Cb *c = a0->f_58;
    p->f_00 = a1->x;
    p->f_04 = a1->z;
    c->f_18 = a1->y;
}
