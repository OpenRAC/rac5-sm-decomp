/* LEVEL_03:0x1583C8 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003AE850[];
extern char D_00237AE0[];

extern void func_1DADF8(void);
extern void func_1DB000(void *object);
extern void func_1DC348(char *a, char *b, void *object);
extern void func_1DC648(char *object);

void func_1583C8(void *object)
{
    ((void (*)(void *))func_1DADF8)(object);
    func_1DB000(object);
    func_1DC348(D_003AE850, D_00237AE0, object);
    func_1DC648(D_003AE850);
}
