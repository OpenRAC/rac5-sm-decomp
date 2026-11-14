/* LEVEL_04:0x197ED0 -- starts a timed helper on the object, applies a direction, sets state 3 and records a target and two position floats in the object's record. */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { char pad00[0x54]; int target; float f58; float f5C; } Rec;
typedef struct { char pad00[0x30]; float x; char pad34[4]; float z; char pad3C[9]; unsigned char state; char pad46[0x12]; Rec *rec; } Obj;

extern void func_080188(Obj *o, int a1, int a2, int a3, float f0, float f1);
extern void func_034C28(Obj *o, Vec3 *dir, float f);

void func_197ED0(Obj *o, float f, int target, Vec3 *dir)
{
    Rec *rec = o->rec;

    func_080188(o, 2, 0, 1, 0.15f, 0.0f);
    func_034C28(o, dir, f);
    o->state = 3;
    rec->target = target;
    rec->f58 = o->x;
    rec->f5C = o->z;
}
