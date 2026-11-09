/* LEVEL_23:0x182190 -- placement copy of LEVEL_01_1A0DA0.c: updates an object's phase byte from its state, then resets a controller and calls the follow-up. */
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
extern char D_002025C0[];
extern void func_035568(char *a, int b);
extern void func_045288(char *a, int b);
extern int func_073ED0(char *a0, int a1);
extern void func_073F58(int a, int b, float c);
extern void func_184180(Obj *o);
extern void func_182270(int a);

void func_182190(Obj *o)
{
    Own *own = *(Own **)((char *)o + 0x54);
    Aux *aux = *(Aux **)((char *)o + 0x58);
    func_035568(D_002025C0, 0);
    func_045288(D_002025C0, own->w10);
    if (func_073ED0((char *)own->w10, 0) != 0 || aux->b109 != 0) {
        switch (o->b45) {
        case 1:
            o->b46 = 6;
            break;
        case 2:
            o->f70 = 0;
            func_184180(o);
            if (aux->b109 == 0)
                o->b46 = 3;
            else
                o->b46 = 4;
            break;
        }
        func_073F58(own->w10, 0, 0.0f);
    }
    func_182270(0);
}
