/* LEVEL_17:0x13DFC0 -- placement copy of LEVEL_16_1425B0.c: runs the three per-frame update helpers on the object with the same delta. */
struct Obj_142ED0;
extern void func_13E8E0(struct Obj_142ED0 *obj, float dt);
extern void func_13EC80(struct Obj_142ED0 *obj, float dt);
extern void func_13E1C0(struct Obj_142ED0 *obj, float dt);

void func_13DFC0(struct Obj_142ED0 *obj, float dt)
{
    func_13E8E0(obj, dt);
    func_13EC80(obj, dt);
    func_13E1C0(obj, dt);
}
