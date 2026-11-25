/* LEVEL_09:0x150D28 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_0037B0D0[];
extern char D_00207F50[];

extern void func_1B0F40(void);
extern void func_1B1130(void *object);
extern void func_1B1C48(char *a, char *b, void *object);
extern void func_1B1F48(char *object);

void func_150D28(void *object)
{
    ((void (*)(void *))func_1B0F40)(object);
    func_1B1130(object);
    func_1B1C48(D_0037B0D0, D_00207F50, object);
    func_1B1F48(D_0037B0D0);
}
