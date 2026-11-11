/* LEVEL_10:0x1769E0 -- sets the object's effect up, copies a 28-byte preset into it and finishes with the follow-up helper. */
typedef struct Obj Obj;

typedef struct Vec7 {
    float v[7];
} Vec7;

extern Vec7 D_0039F240;
extern void func_1730A0(Obj *obj, int id, float a, float b);
extern void func_173850(Obj *obj);

void func_1769E0(void *unused, Obj *obj)
{
    func_1730A0(obj, 9, 0.0f, 0.15f);
    *(Vec7 *)((char *)obj + 0xA4) = D_0039F240;
    func_173850(obj);
}
