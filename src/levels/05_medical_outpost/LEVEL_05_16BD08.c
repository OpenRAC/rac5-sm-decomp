/* LEVEL_05.REL:0x16BD08 -- lays the frame's three floats one slot further. */
typedef struct { float f_00; float f_04; float f_08; float f_0C; } Node;
typedef struct { char pad[0x1C]; float f_1C; } Cb;
typedef struct { char pad[0x54]; Node *f_54; Cb *f_58; } Obj;
typedef struct { float x; float y; float z; } Vec3;
void func_16BD08(Obj *a0, Vec3 *a1)
{
    Node *p = a0->f_54;
    Cb *c = a0->f_58;
    p->f_08 = a1->x;
    p->f_0C = a1->z;
    c->f_1C = a1->y;
}
