/* LEVEL_01:0x1E2938 -- divide 1.0 by a field of the object and store it. */
typedef struct {
    float divisor;
    char pad[8];
    float result;
} Obj;

void func_1E2938(Obj *obj)
{
    obj->result = 1.0f / obj->divisor;
}
