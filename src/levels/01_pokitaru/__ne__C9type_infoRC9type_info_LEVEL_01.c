/* LEVEL_01:0x1EE2E8 -- inverts the result of the object test. */
struct Obj;

extern int func_1EDCC8(struct Obj *o, int a);

int __ne__C9type_infoRC9type_info(struct Obj *o, int a)
{
    return func_1EDCC8(o, a) ^ 1;
}
