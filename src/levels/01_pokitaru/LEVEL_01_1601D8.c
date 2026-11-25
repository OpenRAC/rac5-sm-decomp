/* LEVEL_01:0x1601D8 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_00395728[];
extern char D_0021F9E0[];

extern void func_1CAA20(void);
extern void func_1CAC10(void *object);
extern void func_1CB728(char *a, char *b, void *object);
extern void func_1CBA28(char *object);

void func_1601D8(void *object)
{
    ((void (*)(void *))func_1CAA20)(object);
    func_1CAC10(object);
    func_1CB728(D_00395728, D_0021F9E0, object);
    func_1CBA28(D_00395728);
}
