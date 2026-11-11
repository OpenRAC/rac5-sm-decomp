/* LEVEL_18:0x0F0180 -- passes a stack buffer unless the caller supplies one. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001B5D38;

extern void func_0F01C0(void *a0, int a1, int a2, Obj *a3, float f12);

void func_0F0180(int a0, Obj *a1, int a2)
{
    char buf[0x10];
    void *p = a2 ? (void *)a2 : (void *)buf;

    func_0F01C0(p, a0, D_001B5D38.p->i_08, a1, a1->f_0C);
}
