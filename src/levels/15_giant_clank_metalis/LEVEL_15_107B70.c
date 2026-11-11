/* LEVEL_15:0x107B70 -- raise a flag, set a value and run the two
   sub-object initialisers. */
typedef struct {
    char pad0[0x0D];
    char flag;
    char pad1[0xA];
    float value;
    char pad2[0x398 - 0x1C];
    char sub1[0x30];
    char sub2[0x100];
} Obj;

void func_0FE8B8(void *p);

void func_107B70(Obj *a0)
{
    a0->flag = 1;
    a0->value = 90.0f;
    func_0FE8B8(a0->sub1);
    func_0FE8B8(a0->sub2);
}
