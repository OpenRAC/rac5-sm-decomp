/* LEVEL_08:0x0013D8 -- reads one float field of the global object. */
typedef struct {
    char pad[0xF8];
    float f;
} Obj;

extern Obj *D_237DC8;

float func_0013D8(void)
{
    return D_237DC8->f;
}
