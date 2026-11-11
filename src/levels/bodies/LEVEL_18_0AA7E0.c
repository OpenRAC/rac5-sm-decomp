/* LEVEL_18:0x0AA7E0 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_018220(int a);
extern int func_018250(void);
extern int func_094C18(void);
extern void func_0AA680(int a);
extern void func_0181E0(int a, int b);

extern int D_00276CFC;
extern int D_001ABF90;
extern char D_00276D0C;

int func_0AA7E0(int a, int b)
{
    int result = 0;

    if (func_018220(6) != 0)
        return 0;
    if (func_018250() != 0)
        return 0;
    if (func_094C18() != 0)
        return 0;
    if (a == 2 && D_00276CFC != 0)
        return 0;
    func_0AA680(a);
    if (D_001ABF90 == 0) {
        func_0181E0(6, a);
        result = 1;
        D_00276D0C = b;
    }
    return result;
}
