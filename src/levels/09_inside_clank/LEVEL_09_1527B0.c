/* LEVEL_09:0x1527B0 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_0037CDA0[];
extern char D_002087A8[];

extern void func_1B0F40(void);
extern void func_1B1130(void *object);
extern void func_1B1C48(char *a, char *b, void *object);
extern void func_1B1F48(char *object);

void func_1527B0(void *object)
{
    ((void (*)(void *))func_1B0F40)(object);
    func_1B1130(object);
    func_1B1C48(D_0037CDA0, D_002087A8, object);
    func_1B1F48(D_0037CDA0);
}
