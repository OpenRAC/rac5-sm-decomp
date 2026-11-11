/* LEVEL_08:0x003BA0 -- stores one field of the current context. */
typedef struct {
    char pad[0x2BC];
    float f_2BC;
} Obj;

extern Obj *D_237DD4;

void func_003BA0(float v)
{
    D_237DD4->f_2BC = v;
}
