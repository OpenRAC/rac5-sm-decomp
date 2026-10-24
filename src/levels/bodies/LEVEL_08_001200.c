/* LEVEL_08.REL:0x001200 -- reads one float of the
   current record. */
typedef struct {
    char pad[0x110];
    float f_110;
} Obj;

extern Obj *D_00237DC8;

float func_001200(void)
{
    return D_00237DC8->f_110;
}
