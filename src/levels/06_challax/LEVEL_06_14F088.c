/* LEVEL_06:0x14F088 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_00380740[];
extern char D_0020D4A8[];

extern void func_1B6E88(void);
extern void func_1B7078(void *object);
extern void func_1B7B90(char *a, char *b, void *object);
extern void func_1B7E90(char *object);

void func_14F088(void *object)
{
    ((void (*)(void *))func_1B6E88)(object);
    func_1B7078(object);
    func_1B7B90(D_00380740, D_0020D4A8, object);
    func_1B7E90(D_00380740);
}
