/* LEVEL_01.REL:0x1A0DA0: reviewed 220-byte candidate, held for ABI review.
 * Updates an object's phase byte from its state, then resets a controller and
 * calls the follow-up.
 * pinned C with gnu-ee-trial links 220/220 bytes and is byte-exact at this and
 * 7 other USA placements, but the prototypes disagree.
 * It declares func_07CAB8 returning int with (int, int), but the accepted
 * LEVEL_01_07CAB8.c defines it returning int with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern int func_07CAB8(int a, int b);
extern void func_07CB58(int a, int b, float c);
extern void func_1A2D90(Obj *o);
extern void func_1A0E80(int a);

void func_1A0DA0(Obj *o)
{
    Own *own = *(Own **)((char *)o + 0x54);
    Aux *aux = *(Aux **)((char *)o + 0x58);
    func_03C0E8(D_00235140, 0);
    func_04BF08(D_00235140, own->w10);
    if (func_07CAB8(own->w10, 0) != 0 || aux->b109 != 0) {
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
