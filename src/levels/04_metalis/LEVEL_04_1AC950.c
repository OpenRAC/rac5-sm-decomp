/* LEVEL_04:0x1AC950 -- placement copy of LEVEL_01_1A0DA0.c: updates an object's phase byte from its state, then resets a controller and calls the follow-up. */
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
extern char D_0024F950[];
extern void func_03DAE8(char *a, int b);
extern void func_04D8C8(char *a, int b);
extern int func_07FF30(char *a0, int a1);
extern void func_07FFB8(int a, int b, float c);
extern void func_1AE940(Obj *o);
extern void func_1ACA30(int a);

void func_1AC950(Obj *o)
{
    Own *own = *(Own **)((char *)o + 0x54);
    Aux *aux = *(Aux **)((char *)o + 0x58);
    func_03DAE8(D_0024F950, 0);
    func_04D8C8(D_0024F950, own->w10);
    if (func_07FF30((char *)own->w10, 0) != 0 || aux->b109 != 0) {
        switch (o->b45) {
        case 1:
            o->b46 = 6;
            break;
        case 2:
            o->f70 = 0;
            func_1AE940(o);
            if (aux->b109 == 0)
                o->b46 = 3;
            else
                o->b46 = 4;
            break;
        }
        func_07FFB8(own->w10, 0, 0.0f);
    }
    func_1ACA30(0);
}
