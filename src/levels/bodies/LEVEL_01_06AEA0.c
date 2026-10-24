/* LEVEL_01:0x06AEA0 -- subtracts the shared offset from the object's field. */
typedef struct {
    char pad[0xF60];
    float f_F60;
} Obj;

extern float D_20DE48;

float func_06AEA0(Obj *self)
{
    return self->f_F60 - D_20DE48;
}
