/* LEVEL_15.REL:0x045D88 -- state-9 reset, then a conditional notifier, then
   (unless the object's shape code is out of range) a four-float copy from the
   table at 0x0016C608. */
typedef struct {
    unsigned char pad0[0x102];
    unsigned short kind_102;
    unsigned char pad1[4];
    unsigned short mode_108;
    unsigned char pad2[0x304 - 0x10A];
    float v_304;
    float v_308;
    float v_30C;
    float v_310;
} Obj;

typedef struct {
    float v_00;
    float v_04;
    float v_08;
    float v_0C;
} Quad;

extern Quad D_0016C608;
extern void func_05BB78(Obj *object, int value);
extern int func_02E8B0(Obj *object);
extern void func_0F4E98(Obj *object, int a, int b);

void func_045D88(Obj *a0)
{
    float *dest;

    if (a0->mode_108 == 9)
        func_05BB78(a0, 0);
    if (func_02E8B0(a0) != 0)
        func_0F4E98(a0, 0, 1);
    if ((unsigned)(a0->kind_102 - 0x28) < 12)
        return;
    dest = &a0->v_304;
    dest[0] = D_0016C608.v_00;
    dest[1] = D_0016C608.v_04;
    dest[2] = D_0016C608.v_08;
    dest[3] = D_0016C608.v_0C;
}
