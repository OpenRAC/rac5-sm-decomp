/* LEVEL_08:0x203FC0 -- placement copy of LEVEL_04_1DD048.c: refreshes an object's state, switches it to mode 6 when a check passes, and returns whether its counter reached zero. */
extern char D_00278970[];
extern void func_0368F0(char *o);
extern void func_0138E0(char *o, char *a, char *b, char *c, char *d);
extern int func_084A40(char *o, int a);
extern void func_084C98(char *o, int a, int b, int c, float f, float g);

int func_203FC0(char *o)
{
    char *s0;

    s0 = *(char **)(o + 0x58);
    func_0368F0(o);
    func_0138E0(o, s0 + 0xF8, s0 + 0xFC, s0 + 0xE8, D_00278970);
    if (*(unsigned char *)(s0 + 0x10C) == 5) {
        if (func_084A40(o, 0)) {
            *(unsigned char *)(s0 + 0x10C) = 6;
            func_084C98(o, 6, 0, 1, 0.15000000596046448f, 0.0f);
        }
    }
    *(int *)(s0 + 0xF4) = *(int *)(s0 + 0xF4) - 1;
    return *(int *)(s0 + 0xF4) == 0;
}
