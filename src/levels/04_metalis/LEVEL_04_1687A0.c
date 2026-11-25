/* LEVEL_04:0x1687A0 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003AE298[];
extern char D_002389F8[];

extern void func_1DE068(void);
extern void func_1DE270(void *object);
extern void func_1DEF58(char *a, char *b, void *object);
extern void func_1DF258(char *object);

void func_1687A0(void *object)
{
    ((void (*)(void *))func_1DE068)(object);
    func_1DE270(object);
    func_1DEF58(D_003AE298, D_002389F8, object);
    func_1DF258(D_003AE298);
}
