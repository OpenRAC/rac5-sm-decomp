/* LEVEL_06:0x14EE60 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003806E0[];
extern char D_0020D2E0[];

extern void func_1B6E88(void);
extern void func_1B7078(void *object);
extern void func_1B7B90(char *a, char *b, void *object);
extern void func_1B7E90(char *object);

void func_14EE60(void *object)
{
    ((void (*)(void *))func_1B6E88)(object);
    func_1B7078(object);
    func_1B7B90(D_003806E0, D_0020D2E0, object);
    func_1B7E90(D_003806E0);
}
