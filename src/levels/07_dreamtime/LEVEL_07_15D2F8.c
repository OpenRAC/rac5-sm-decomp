/* LEVEL_07:0x15D2F8 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003AAF10[];
extern char D_00233DC8[];

extern void func_1D67B8(void);
extern void func_1D69C0(void *object);
extern void func_1D7D08(char *a, char *b, void *object);
extern void func_1D8008(char *object);

void func_15D2F8(void *object)
{
    ((void (*)(void *))func_1D67B8)(object);
    func_1D69C0(object);
    func_1D7D08(D_003AAF10, D_00233DC8, object);
    func_1D8008(D_003AAF10);
}
