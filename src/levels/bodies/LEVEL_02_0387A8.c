/* variant: the flag address is taken inside the branch */
typedef struct {
    char pad[0x4C];
    int flag;
} A1;

typedef struct {
    char pad[0x14];
    float x;
    float y;
    float z;
    float w;
} Obj;

extern Obj *D_24A5E8;

extern void func_0872A0(void *p, Obj *o, int *f, int n1, float v1,
                         float v2, int n2, float v3, int n3, float v4,
                         int n4, int n5);

void func_0387A8(void *a0, A1 *a1)
{
    if (a1->flag == 0) {
        int *f = &a1->flag;
        Obj *o = D_24A5E8;

        if (o != 0) {
            func_0872A0(a0, o, f, 0, o->x, o->y, 0, o->z, 0,
                        o->w, 0, 1);
        }
    }
}
