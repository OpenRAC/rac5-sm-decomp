/* LEVEL_03:0x176A90 -- asks the game for the named object; when it comes
   back, the argument's vector is copied into it and its counter is cleared. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    Vec3 v;
    int w;
} Obj;

extern char D_003B0D48[];

Obj *func_09F9A0(Obj **out, char *name, int flag);

void func_176A90(Obj *src)
{
    Obj *out;
    Obj *res = func_09F9A0(&out, D_003B0D48, 1);

    if (out) {
        res->v = src->v;
        res->w = 0;
    }
}
