/* LEVEL_04:0x1DD048 -- refreshes an object's state, switches it to mode 6 when a check passes, and returns whether its counter reached zero. */
extern char D_002442E0[];
extern void func_033678(char *o);
extern void func_013690(char *o, char *a, char *b, char *c, char *d);
extern int func_07FF30(char *o, int a);
extern void func_080188(char *o, int a, int b, int c, float f, float g);

int func_1DD048(char *o)
{
    char *s0;

    s0 = *(char **)(o + 0x58);
    func_033678(o);
    func_013690(o, s0 + 0xF8, s0 + 0xFC, s0 + 0xE8, D_002442E0);
    if (*(unsigned char *)(s0 + 0x10C) == 5) {
        if (func_07FF30(o, 0)) {
            *(unsigned char *)(s0 + 0x10C) = 6;
            func_080188(o, 6, 0, 1, 0.15000000596046448f, 0.0f);
        }
    }
    *(int *)(s0 + 0xF4) = *(int *)(s0 + 0xF4) - 1;
    return *(int *)(s0 + 0xF4) == 0;
}
