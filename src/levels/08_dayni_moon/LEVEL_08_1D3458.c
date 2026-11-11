/* LEVEL_08:0x1D3458 -- placement copy of LEVEL_01_1A0DA0.c: updates an object's phase byte from its state, then resets a controller and calls the follow-up. */
typedef struct {
    char pad0[0x10];
    int w10;
} Own;
typedef struct {
    char pad0[0x109];
    unsigned char b109;
} Aux;
typedef struct {
    char pad0[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x29];
    float f70;
    char pad74[0xC0];
    Own *p54;
} Obj;
extern char D_002843D0[];
extern void func_0411D0(char *a, int b);
extern void func_051010(char *a, int b);
extern int func_084A40(char *a0, int a1);
extern void func_084AC8(int a, int b, float c);
extern void func_1D5448(Obj *o);
extern void func_1D3538(int a);

void func_1D3458(Obj *o)
{
    Own *own = *(Own **)((char *)o + 0x54);
    Aux *aux = *(Aux **)((char *)o + 0x58);
    func_0411D0(D_002843D0, 0);
    func_051010(D_002843D0, own->w10);
    if (func_084A40((char *)own->w10, 0) != 0 || aux->b109 != 0) {
        switch (o->b45) {
        case 1:
            o->b46 = 6;
            break;
        case 2:
            o->f70 = 0;
            func_1D5448(o);
            if (aux->b109 == 0)
                o->b46 = 3;
            else
                o->b46 = 4;
            break;
        }
        func_084AC8(own->w10, 0, 0.0f);
    }
    func_1D3538(0);
}
