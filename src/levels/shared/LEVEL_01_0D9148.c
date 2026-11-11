/* LEVEL_01:0x0D9148 -- store two integers and their sum as a float. */
typedef struct {
    char pad[0x1C];
    int first;
    int second;
    char pad2[0xC];
    float total;
} Obj;

void func_0D9148(Obj *obj, int a1, int a2)
{
    obj->first = a2;
    obj->second = a1;
    obj->total = (float)(a1 + a2);
}
