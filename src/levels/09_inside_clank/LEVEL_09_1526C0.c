/* LEVEL_09:0x1526C0 -- placement copy of LEVEL_02_174AF8.c: sets up the scene: runs the setup helpers, looks up two handles and stores them in globals, then registers the object with the shared block and runs its update. */
extern char D_0037C440[];
extern char D_002085A0[];
extern int D_001F0F9C;
extern int D_001F0FA0;
extern void func_1B0F40(void);
extern void func_0EB628(int a);
extern int func_123000(unsigned int key);
extern void func_1B1130(void *o);
extern void func_1B1C48(char *block, char *table, void *o);
extern void func_1B1F48(char *block);

void func_1526C0(void *o)
{
    char *block;

    ((void (*)(void *))func_1B0F40)(o);
    func_0EB628(7);
    D_001F0F9C = func_123000(0xC28DA8E0u);
    D_001F0FA0 = func_123000(0xFF1208D1u);
    func_1B1130(o);
    block = D_0037C440;
    func_1B1C48(block, D_002085A0, o);
    func_1B1F48(block);
}
