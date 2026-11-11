/* LEVEL_16:0x1425B0 -- runs the three per-frame update helpers on the object with the same delta. */
struct Obj_142ED0;
extern void func_142ED0(struct Obj_142ED0 *obj, float dt);
extern void func_143270(struct Obj_142ED0 *obj, float dt);
extern void func_1427B0(struct Obj_142ED0 *obj, float dt);

void func_1425B0(struct Obj_142ED0 *obj, float dt)
{
    func_142ED0(obj, dt);
    func_143270(obj, dt);
    func_1427B0(obj, dt);
}
