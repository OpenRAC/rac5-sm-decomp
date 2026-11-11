/* LEVEL_01.REL:0x001200 -- reads one float of the
   current record. */
typedef struct {
    char pad[0x110];
    float f_110;
} Obj;

extern Obj *D_001EF248;

float func_001200(void)
{
    return D_001EF248->f_110;
}
