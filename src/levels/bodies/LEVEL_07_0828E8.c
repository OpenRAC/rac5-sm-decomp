/* LEVEL_07.REL:0x0828E8 -- runs func_082918 on the record, then parks 1.0 at
   +0xC of the second argument. */
typedef struct {
    unsigned char pad0[0xC];
    float v_C;
} Obj;

extern void func_082918(void *a0);

void func_0828E8(void *a0, Obj *a1)
{
    func_082918(a0);
    a1->v_C = 1.0f;
}
