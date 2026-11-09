/* LEVEL_09:0x16A650 -- placement copy of LEVEL_03_176A90.c: asks the game for the named object; when it comes
   back, the argument's vector is copied into it and its counter is cleared. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    Vec3 v;
    int w;
} Obj;

extern char D_0037D578[];

Obj *func_09CED0(Obj **out, char *name, int flag);

void func_16A650(Obj *src)
{
    Obj *out;
    Obj *res = func_09CED0(&out, D_0037D578, 1);

    if (out) {
        res->v = src->v;
        res->w = 0;
    }
}
