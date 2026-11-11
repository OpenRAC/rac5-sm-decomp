/* LEVEL_19:0x13F248 -- placement copy of LEVEL_16_1425B0.c: runs the three per-frame update helpers on the object with the same delta. */
struct Obj_142ED0;
extern void func_13FB68(struct Obj_142ED0 *obj, float dt);
extern void func_13FF08(struct Obj_142ED0 *obj, float dt);
extern void func_13F448(struct Obj_142ED0 *obj, float dt);

void func_13F248(struct Obj_142ED0 *obj, float dt)
{
    func_13FB68(obj, dt);
    func_13FF08(obj, dt);
    func_13F448(obj, dt);
}
