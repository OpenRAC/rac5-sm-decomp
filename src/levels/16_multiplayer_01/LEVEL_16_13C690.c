/* LEVEL_16:0x13C690 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_002E49A8[];
extern char D_001D2D38[];

extern void func_182EC0(void);
extern void func_1830C8(void *object);
extern void func_184410(char *a, char *b, void *object);
extern void func_184710(char *object);

void func_13C690(void *object)
{
    ((void (*)(void *))func_182EC0)(object);
    func_1830C8(object);
    func_184410(D_002E49A8, D_001D2D38, object);
    func_184710(D_002E49A8);
}
