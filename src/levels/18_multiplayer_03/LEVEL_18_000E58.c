/* LEVEL_18.REL:0x000E58 -- reads the +0x10C float of the object the global at
   0x0019C14C points at. */
typedef struct {
    unsigned char pad0[0x10C];
    float v_10C;
} Obj;

extern Obj *D_0019C14C;

float func_000E58(void)
{
    return D_0019C14C->v_10C;
}
