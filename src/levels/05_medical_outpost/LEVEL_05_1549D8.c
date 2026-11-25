/* LEVEL_05:0x1549D8 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003814C8[];
extern char D_0020D928[];

extern void func_1B9E30(void);
extern void func_1BA020(void *object);
extern void func_1BAB38(char *a, char *b, void *object);
extern void func_1BAE38(char *object);

void func_1549D8(void *object)
{
    ((void (*)(void *))func_1B9E30)(object);
    func_1BA020(object);
    func_1BAB38(D_003814C8, D_0020D928, object);
    func_1BAE38(D_003814C8);
}
