/* LEVEL_24:0x001008 -- reads the current object's field. */
typedef struct {
    char pad[0x110];
    float f_110;
} Obj;

extern Obj *D_001BFEC8;

float func_001008(void)
{
    return D_001BFEC8->f_110;
}
