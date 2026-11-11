/* LEVEL_08.REL:0x0011F0 -- reads the +0x10C float of the object the global at
   0x00237DC8 points at. */
typedef struct {
    unsigned char pad0[0x10C];
    float v_10C;
} Obj;

extern Obj *D_00237DC8;

float func_0011F0(void)
{
    return D_00237DC8->v_10C;
}
