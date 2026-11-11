/* FRONTEND:0x00B5E0 -- halves the engine count and adds the base value. */
struct Obj {
    int f00;
};

int func_00B640(struct Obj *);

int GetCenterX__17HUD_BoundingBox16(struct Obj *obj)
{
    int count;

    count = func_00B640(obj);
    return (count >> 1) + obj->f00;
}
