/* LEVEL_20:0x041C48 -- placement copy of LEVEL_16_047B28.c: runs two flag-gated helpers and forwards its argument to one more helper. */

extern int func_08D1E8(int a);
extern void func_08D220(void);
extern int func_0E5980(void);
extern void func_014298(void);
extern int func_0E6AB0(int a);

void func_041C48(int a)
{
    if (func_08D1E8(a) != 0) {
        func_08D220();
    }
    if (func_0E5980() != 0) {
        func_014298();
    } else {
        func_0E6AB0(a);
    }
}
