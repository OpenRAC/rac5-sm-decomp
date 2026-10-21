/* LEVEL_19:0x003610 -- the global object takes the argument's vector and the
   two floats of the call; its flag word is raised, then cleared again. */
typedef struct {
    float f[3];
} Vec3;

typedef struct {
    char pad00[0x40];
    unsigned long long flags;
    char pad48[0x250 - 0x48];
    Vec3 v;
    float first;
    float second;
} Obj;

extern char D_0019BE5C[];

void func_003610(Vec3 *src, float a, float b, int flag)
{
    (*(Obj **)D_0019BE5C)->flags |= 0x40000;
    (*(Obj **)D_0019BE5C)->v = *src;
    (*(Obj **)D_0019BE5C)->first = a;
    (*(Obj **)D_0019BE5C)->second = b;
    if (flag)
        (*(Obj **)D_0019BE5C)->flags &= ~0x20;
}
