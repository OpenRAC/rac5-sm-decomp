/* LEVEL_22.REL:0x02AA78 -- stores the two handles and the blend weight in
   the node, then hands the slot at +0x10 to the emitter. The 16 bytes that
   follow are the small difference helper that the family carries along. */
typedef struct {
    int f_00;
    int f_04;
    char pad[0x80 - 0x08];
    float f_80;
} Obj;

extern void func_02A7C8(void *a0, void *a1, void *a2);

void func_02AA78(Obj *a0, float f, int kind, void *p1, void *p2, int t0, int t1)
{
    a0->f_04 = t0;
    a0->f_80 = f;
    a0->f_00 = t1;
    func_02A7C8(&a0->pad[0x08], p1, p2);
}

int func_02AAB0(int *a0, int *a1)
{
    return *a0 - *a1;
}
