/* LEVEL_15:0x029980 -- calls a helper, then copies a 12-byte record from the argument into the object and stores the float argument. */
typedef struct {
    int w0;
    int w1;
    int w2;
} Rec12;

typedef struct {
    char pad[4];
    Rec12 r;
    float f;
} Obj029980;

extern void func_0294D8();

void func_029980(Obj029980 *a0, int a1, int a2, Rec12 *a3, float f)
{
    func_0294D8(a0);
    a0->r = *a3;
    a0->f = f;
}
