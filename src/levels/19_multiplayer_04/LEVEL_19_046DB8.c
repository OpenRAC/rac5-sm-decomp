/* LEVEL_19:0x046DB8 -- placement copy of LEVEL_16_047B28.c: runs two flag-gated helpers and forwards its argument to one more helper. */

extern int func_0A2380(int a);
extern void func_0A23B8(void);
extern int func_1135B8(void);
extern void func_0160A0(void);
extern int func_1147B8(int a);

void func_046DB8(int a)
{
    if (func_0A2380(a) != 0) {
        func_0A23B8();
    }
    if (func_1135B8() != 0) {
        func_0160A0();
    } else {
        func_1147B8(a);
    }
}
