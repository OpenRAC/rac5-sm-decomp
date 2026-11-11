/* LEVEL_18:0x13DEA0 -- placement copy of LEVEL_16_1425B0.c: runs the three per-frame update helpers on the object with the same delta. */
struct Obj_142ED0;
extern void func_13E7C0(struct Obj_142ED0 *obj, float dt);
extern void func_13EB60(struct Obj_142ED0 *obj, float dt);
extern void func_13E0A0(struct Obj_142ED0 *obj, float dt);

void func_13DEA0(struct Obj_142ED0 *obj, float dt)
{
    func_13E7C0(obj, dt);
    func_13EB60(obj, dt);
    func_13E0A0(obj, dt);
}
