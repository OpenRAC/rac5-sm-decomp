/* LEVEL_19:0x05CE48 -- the record's timer minus the shared threshold. */
typedef struct {
    char pad_00[0xF60];
    float f_F60;
} Obj;

extern float D_001C4028;

float func_05CE48(Obj *a0)
{
    return a0->f_F60 - D_001C4028;
}
