/* LEVEL_09.REL:0x001400 -- reads the +0xFC float of the object the global at
   0x001D9048 points at. */
typedef struct {
    unsigned char pad0[0xFC];
    float v_FC;
} Obj;

extern Obj *D_001D9048;

float func_001400(void)
{
    return D_001D9048->v_FC;
}
