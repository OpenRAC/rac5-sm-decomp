/* LEVEL_20.REL:0x003718 -- writes one float of the
   current record. */
typedef struct {
    char pad[0x154];
    float f_154;
} Obj;

extern Obj *D_000FD3C4;

void func_003718(float v)
{
    D_000FD3C4->f_154 = v;
}
