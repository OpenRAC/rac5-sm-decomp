typedef struct { char pad[0x118]; } Elem;
typedef struct { char pad_08[0x8]; float f_08; char pad_0C[0x154 - 0x0C]; float f_154; } Obj;
extern Elem D_002EDA44[];
extern char D_0016FCC0[];
extern char D_0015C3A0[];
extern char D_0015C540[];
void func_107698(char *p);
void func_11D580(Elem *e, char *q);
void func_13E970(char *p);
void func_1067D0(int a0, Obj *a1)
{
    unsigned i;
    func_107698((char *)a1 + 0x18);
    for (i = 0; i < 9; i++)
        func_11D580(&D_002EDA44[i], D_0016FCC0);
    func_13E970(D_0015C3A0);
    func_13E970(D_0015C540);
    a1->f_154 = a1->f_08 < 0.0f ? 1e30f : a1->f_08;
}
