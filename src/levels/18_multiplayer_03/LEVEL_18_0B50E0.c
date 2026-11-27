/* LEVEL_18:0x0B50E0 -- placement copy of LEVEL_01_0C7498.c: forwards the object to func_1109F8, then calls func_10EA48(1). */
extern void func_1109F8(void *p);
extern void func_10EA48(int a);

void func_0B50E0(void *object)
{
    func_1109F8(object);
    func_10EA48(1);
}
