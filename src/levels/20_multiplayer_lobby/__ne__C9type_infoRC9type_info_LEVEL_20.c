/* LEVEL_20:0x0FC4B8 -- placement copy of LEVEL_01_1EE2E8.c: inverts the result of the object test. */
struct Obj;

extern int func_0FBE98(struct Obj *o, int a);

int __ne__C9type_infoRC9type_info(struct Obj *o, int a)
{
    return func_0FBE98(o, a) ^ 1;
}
