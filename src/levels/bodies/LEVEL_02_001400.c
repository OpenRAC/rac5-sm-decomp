/* LEVEL_02.REL:0x001400 -- reads one float of the
   current record. */
typedef struct {
    char pad[0xFC];
    float f_FC;
} Obj;

extern Obj *D_00203EC8;

float func_001400(void)
{
    return D_00203EC8->f_FC;
}
