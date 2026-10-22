/* LEVEL_02:191B28 -- forwards four floats of a global object to a named
   routine, together with eight integer arguments. */
typedef struct {
    char pad[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

extern Obj *D_0021CBC0;

void func_0872A0(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7,
                 float c0, float c1, float c2, float c3);

void func_191B28(int a0, int a1)
{
    Obj *p = D_0021CBC0;

    if (p) {
        func_0872A0(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
}
