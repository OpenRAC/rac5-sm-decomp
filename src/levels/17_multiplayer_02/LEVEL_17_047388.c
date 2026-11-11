/* LEVEL_17:0x047388 -- placement copy of LEVEL_16_047B28.c: runs two flag-gated helpers and forwards its argument to one more helper. */

extern int func_0A1FE8(int a);
extern void func_0A2020(void);
extern int func_1125A0(void);
extern void func_015D00(void);
extern int func_1137A0(int a);

void func_047388(int a)
{
    if (func_0A1FE8(a) != 0) {
        func_0A2020();
    }
    if (func_1125A0() != 0) {
        func_015D00();
    } else {
        func_1137A0(a);
    }
}
