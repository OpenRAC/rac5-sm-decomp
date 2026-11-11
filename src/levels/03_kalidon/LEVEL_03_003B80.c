/* LEVEL_03.REL:0x003B80 -- parks the float argument at +0x154 of the object
   the global at 0x002078D4 points at. */
typedef struct {
    unsigned char pad0[0x154];
    float v_154;
} Obj;

extern Obj *D_002078D4;

void func_003B80(float value)
{
    D_002078D4->v_154 = value;
}
