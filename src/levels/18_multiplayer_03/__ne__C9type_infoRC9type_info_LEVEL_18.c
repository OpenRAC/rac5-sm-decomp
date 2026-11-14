/* LEVEL_18:0x19B228 -- placement copy of LEVEL_01_1EE2E8.c: inverts the result of the object test. */
struct Obj;

extern int func_19AC08(struct Obj *o, int a);

int __ne__C9type_infoRC9type_info(struct Obj *o, int a)
{
    return func_19AC08(o, a) ^ 1;
}
