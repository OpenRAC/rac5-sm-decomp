/* LEVEL_08:0x035A30 -- publishes one blend weight to the two slots of the
   global blend record, then asks for a sixteen-byte allocation and applies
   the mode change to the object. */
typedef struct Obj Obj;

typedef struct {
    char pad[0x96C];
    float f96C;
    float f970;
} Rec;

extern Rec D_002843D0;
extern void func_08FE38(int);
extern void func_035208(Obj *, int);

void func_035A30(Obj *a0, float f12)
{
    D_002843D0.f96C = f12;
    D_002843D0.f970 = f12;
    func_08FE38(0x10);
    func_035208(a0, 1);
}
