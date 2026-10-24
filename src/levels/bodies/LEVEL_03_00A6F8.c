/* LEVEL_03.REL:0x00A6F8 -- hands three sub-records and three floats of the object
   behind D_2078D4 to func_002130. */
typedef struct {
    char pad_00[0x30C];
    float f_30C;
    char pad_310[0x08];
    float f_318;
    char pad_31C[0x08];
    float f_324;
} Obj;

extern Obj *D_2078D4;
extern void func_002130(void *, void *, void *, float, float, float);

void func_00A6F8(void)
{
    Obj *o = D_2078D4;

    func_002130((char *)o + 0x30, (char *)o + 0x2CC, (char *)o + 0x2F0,
             o->f_30C, o->f_318, o->f_324);
}
