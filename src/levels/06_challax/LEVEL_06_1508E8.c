/* LEVEL_06:0x1508E8 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003823B0[];
extern char D_0020DB38[];

extern void func_1B6E88(void);
extern void func_1B7078(void *object);
extern void func_1B7B90(char *a, char *b, void *object);
extern void func_1B7E90(char *object);

void func_1508E8(void *object)
{
    ((void (*)(void *))func_1B6E88)(object);
    func_1B7078(object);
    func_1B7B90(D_003823B0, D_0020DB38, object);
    func_1B7E90(D_003823B0);
}
