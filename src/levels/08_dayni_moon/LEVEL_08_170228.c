/* LEVEL_08:0x170228 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003E2E40[];
extern char D_002695A0[];

extern void func_204FE0(void);
extern void func_2051E8(void *object);
extern void func_206530(char *a, char *b, void *object);
extern void func_206830(char *object);

void func_170228(void *object)
{
    ((void (*)(void *))func_204FE0)(object);
    func_2051E8(object);
    func_206530(D_003E2E40, D_002695A0, object);
    func_206830(D_003E2E40);
}
