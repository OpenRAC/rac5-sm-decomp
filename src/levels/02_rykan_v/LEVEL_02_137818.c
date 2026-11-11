typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Obj;

extern Obj *D_0021BEEC;

void func_0872A0(void *a0, Obj *o, int a2, int a3, int a4, int a5, int a6,
                 int a7, float f0, float f1, float f2, float f3);

void func_137818(void *a0)
{
    Obj *o = D_0021BEEC;

    if (o != 0) {
        func_0872A0(a0, o, 0, 0, 0, 0, 0, 1, o->f14, o->f18, o->f1C, o->f20);
    }
}
