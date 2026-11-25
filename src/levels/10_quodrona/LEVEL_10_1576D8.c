/* LEVEL_10:0x1576D8 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_0039CD60[];
extern char D_002276B0[];

extern void func_1CE480(void);
extern void func_1CE688(void *object);
extern void func_1CF9D0(char *a, char *b, void *object);
extern void func_1CFCD0(char *object);

void func_1576D8(void *object)
{
    ((void (*)(void *))func_1CE480)(object);
    func_1CE688(object);
    func_1CF9D0(D_0039CD60, D_002276B0, object);
    func_1CFCD0(D_0039CD60);
}
