/* LEVEL_10:0x158D58 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_0039E9E0[];
extern char D_00227EC8[];

extern void func_1CE480(void);
extern void func_1CE688(void *object);
extern void func_1CF9D0(char *a, char *b, void *object);
extern void func_1CFCD0(char *object);

void func_158D58(void *object)
{
    ((void (*)(void *))func_1CE480)(object);
    func_1CE688(object);
    func_1CF9D0(D_0039E9E0, D_00227EC8, object);
    func_1CFCD0(D_0039E9E0);
}
