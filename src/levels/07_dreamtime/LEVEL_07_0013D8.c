/* LEVEL_07.REL:0x0013D8 -- reads one float of the
   current record. */
typedef struct {
    char pad[0xF8];
    float f_F8;
} Obj;

extern Obj *D_00203548;

float func_0013D8(void)
{
    return D_00203548->f_F8;
}
