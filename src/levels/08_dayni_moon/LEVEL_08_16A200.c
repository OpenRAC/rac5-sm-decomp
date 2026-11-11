/* LEVEL_08:0x16A200 -- starts the object's transition and marks its state
   byte as 3. */
typedef struct {
    char pad[0x45];
    unsigned char state;
} Obj;

extern void func_084C98(Obj *obj, int kind, float time, float start, int a,
                        int b);

void func_16A200(Obj *obj)
{
    func_084C98(obj, 2, 0.15000000596046448f, 0.0f, 0, 1);
    obj->state = 3;
}
