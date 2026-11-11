/* LEVEL_01:0x06AE38 -- write a float field of an object. */
typedef struct {
    char pad[0xF08];
    float value;
} Obj;

void func_06AE38(Obj *obj, float value)
{
    obj->value = value;
}
