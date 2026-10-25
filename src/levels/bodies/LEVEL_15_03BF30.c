/* LEVEL_15.REL:0x03BF30 -- wakes the effect up: an optional first setup at
   0.75/0.9, then three tuned calls that share the 0.75 / 0.4 / 0.2 triple,
   then the final start. */
typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_03B208(Obj *object, float a, float b);
extern void func_03B768(Obj *object, float a, float b, float c);
extern void func_03B4B0(Obj *object, int a, int b, float c, float d, float e);
extern void func_03B778(Obj *object, float a, float b);
extern void func_03AF50(Obj *object);

void func_03BF30(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_03B208(a0, 0.75f, 0.9f);
    func_03B768(a0, 0.75f, 0.4f, 0.2f);
    func_03B4B0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_03B778(a0, 0.75f, 0.5f);
    func_03AF50(a0);
}
