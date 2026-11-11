/* LEVEL_01.REL:0x0011F0 -- reads the +0x10C float of the object the global at
   0x001EF248 points at. */
typedef struct {
    unsigned char pad0[0x10C];
    float v_10C;
} Obj;

extern Obj *D_001EF248;

float func_0011F0(void)
{
    return D_001EF248->v_10C;
}
