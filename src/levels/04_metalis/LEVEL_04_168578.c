/* LEVEL_04:0x168578 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003AE238[];
extern char D_00238830[];

extern void func_1DE068(void);
extern void func_1DE270(void *object);
extern void func_1DEF58(char *a, char *b, void *object);
extern void func_1DF258(char *object);

void func_168578(void *object)
{
    ((void (*)(void *))func_1DE068)(object);
    func_1DE270(object);
    func_1DEF58(D_003AE238, D_00238830, object);
    func_1DF258(D_003AE238);
}
