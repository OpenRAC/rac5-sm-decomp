/* LEVEL_03:0x15A1E0 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003B0530[];
extern char D_00238500[];

extern void func_1DADF8(void);
extern void func_1DB000(void *object);
extern void func_1DC348(char *a, char *b, void *object);
extern void func_1DC648(char *object);

void func_15A1E0(void *object)
{
    ((void (*)(void *))func_1DADF8)(object);
    func_1DB000(object);
    func_1DC348(D_003B0530, D_00238500, object);
    func_1DC648(D_003B0530);
}
