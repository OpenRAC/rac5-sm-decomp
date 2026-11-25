/* LEVEL_17:0x1380A0 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_002D5BB8[];
extern char D_001C5738[];

extern void func_176508(void);
extern void func_176710(void *object);
extern void func_177A58(char *a, char *b, void *object);
extern void func_177D58(char *object);

void func_1380A0(void *object)
{
    ((void (*)(void *))func_176508)(object);
    func_176710(object);
    func_177A58(D_002D5BB8, D_001C5738, object);
    func_177D58(D_002D5BB8);
}
