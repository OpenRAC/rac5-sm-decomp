/* LEVEL_05.REL:0x0013D8 -- reads the +0xF8 float of the object the global at
   0x001DE5C8 points at. */
typedef struct {
    unsigned char pad0[0xF8];
    float v_F8;
} Obj;

extern Obj *D_001DE5C8;

float func_0013D8(void)
{
    return D_001DE5C8->v_F8;
}
