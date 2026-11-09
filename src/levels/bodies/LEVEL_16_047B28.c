/* LEVEL_16:0x047B28 -- runs two flag-gated helpers and forwards its argument to one more helper. */

extern int func_0A2B08(int a);
extern void func_0A2B40(void);
extern int func_112E10(void);
extern void func_0162E0(void);
extern void func_114010(int a);

void func_047B28(int a)
{
    if (func_0A2B08(a) != 0) {
        func_0A2B40();
    }
    if (func_112E10() != 0) {
        func_0162E0();
    } else {
        func_114010(a);
    }
}
