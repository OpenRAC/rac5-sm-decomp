/* LEVEL_23.REL:0x077B80 -- runs func_077BB0 on the record, then parks 1.0 at
   +0xC of the second argument. */
typedef struct {
    unsigned char pad0[0xC];
    float v_C;
} Obj;

extern void func_077BB0(void *a0);

void func_077B80(void *a0, Obj *a1)
{
    func_077BB0(a0);
    a1->v_C = 1.0f;
}
