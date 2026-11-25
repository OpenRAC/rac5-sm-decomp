/* LEVEL_19:0x137B48 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_002E2DD0[];
extern char D_001D3050[];

extern void func_17FB58(void);
extern void func_17FD60(void *object);
extern void func_1810A8(char *a, char *b, void *object);
extern void func_1813A8(char *object);

void func_137B48(void *object)
{
    ((void (*)(void *))func_17FB58)(object);
    func_17FD60(object);
    func_1810A8(D_002E2DD0, D_001D3050, object);
    func_1813A8(D_002E2DD0);
}
