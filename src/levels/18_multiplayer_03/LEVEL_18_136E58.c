/* LEVEL_18:0x136E58 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_002E3020[];
extern char D_001D3520[];

extern void func_1834F8(void);
extern void func_183700(void *object);
extern void func_184A48(char *a, char *b, void *object);
extern void func_184D48(char *object);

void func_136E58(void *object)
{
    ((void (*)(void *))func_1834F8)(object);
    func_183700(object);
    func_184A48(D_002E3020, D_001D3520, object);
    func_184D48(D_002E3020);
}
