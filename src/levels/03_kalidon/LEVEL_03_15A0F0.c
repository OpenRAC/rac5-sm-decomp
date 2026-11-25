/* LEVEL_03:0x15A0F0 -- placement copy of LEVEL_02_174AF8.c: sets up the scene: runs the setup helpers, looks up two handles and stores them in globals, then registers the object with the shared block and runs its update. */
extern char D_003AFBD0[];
extern char D_002382F8[];
extern int D_0021FB64;
extern int D_0021FB68;
extern void func_1DADF8(void);
extern void func_0EDFE0(int a);
extern int func_1282D0(unsigned int key);
extern void func_1DB000(void *o);
extern void func_1DC348(char *block, char *table, void *o);
extern void func_1DC648(char *block);

void func_15A0F0(void *o)
{
    char *block;

    ((void (*)(void *))func_1DADF8)(o);
    func_0EDFE0(7);
    D_0021FB64 = func_1282D0(0xC28DA8E0u);
    D_0021FB68 = func_1282D0(0xFF1208D1u);
    func_1DB000(o);
    block = D_003AFBD0;
    func_1DC348(block, D_002382F8, o);
    func_1DC648(block);
}
