/* LEVEL_10:0x157900 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_0039CDC0[];
extern char D_00227878[];

extern void func_1CE480(void);
extern void func_1CE688(void *object);
extern void func_1CF9D0(char *a, char *b, void *object);
extern void func_1CFCD0(char *object);

void func_157900(void *object)
{
    ((void (*)(void *))func_1CE480)(object);
    func_1CE688(object);
    func_1CF9D0(D_0039CDC0, D_00227878, object);
    func_1CFCD0(D_0039CDC0);
}
