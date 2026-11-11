/* LEVEL_18.REL:0x001068 -- reads one float of the
   current record. */
typedef struct {
    char pad[0xFC];
    float f_FC;
} Obj;

extern Obj *D_0019C14C;

float func_001068(void)
{
    return D_0019C14C->f_FC;
}
