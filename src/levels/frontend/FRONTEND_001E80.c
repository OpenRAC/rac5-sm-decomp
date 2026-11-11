/* FRONTEND:0x001E80 -- the three frame helpers. */
extern void func_0066E0(int a);
extern void LIGHT_BeginFrame__Fv(void);
extern void func_0048B8(void);

void func_001E80(int arg)
{
    func_0066E0(arg);
    LIGHT_BeginFrame__Fv();
    func_0048B8();
}
