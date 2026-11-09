/* LEVEL_15:0x13CC10 -- stores the object's eight-bit count as a float. */
typedef struct {
    char pad[0x18];
    unsigned int word;
    char pad1C[0x28 - 0x1C];
    float value;
} Obj;

void func_13CC10(Obj *obj)
{
    obj->value = (obj->word >> 24) & 0xFF;
}
