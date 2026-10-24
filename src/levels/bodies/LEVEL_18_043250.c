/* LEVEL_18:0x043250 -- hands the object and its field to func_0431F0. */
typedef struct {
    char pad[0x23C];
    float f_23C;
} Obj;

extern void func_0431F0(Obj *a0, char *a1, float f12);

void func_043250(Obj *a0)
{
    func_0431F0(a0, (char *)a0 + 0x200, a0->f_23C);
}
