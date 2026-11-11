/* LEVEL_01:0x1A0DA0 -- updates an object's phase byte from its state, then resets a controller and calls the follow-up. */
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
extern char D_00235140[];
extern void func_03C0E8(char *a, int b);
extern void func_04BF08(char *a, int b);
extern int func_07CAB8(char *a0, int a1);
extern void func_07CB58(int a, int b, float c);
extern void func_1A2D90(Obj *o);
extern void func_1A0E80(int a);

void func_1A0DA0(Obj *o)
{
    Own *own = *(Own **)((char *)o + 0x54);
    Aux *aux = *(Aux **)((char *)o + 0x58);
    func_03C0E8(D_00235140, 0);
    func_04BF08(D_00235140, own->w10);
    if (func_07CAB8((char *)own->w10, 0) != 0 || aux->b109 != 0) {
        switch (o->b45) {
        case 1:
            o->b46 = 6;
            break;
        case 2:
            o->f70 = 0;
            func_1A2D90(o);
            if (aux->b109 == 0)
                o->b46 = 3;
            else
                o->b46 = 4;
            break;
        }
        func_07CB58(own->w10, 0, 0.0f);
    }
    func_1A0E80(0);
}
