/* LEVEL_06:0x1507F8 -- placement copy of LEVEL_02_174AF8.c: sets up the scene: runs the setup helpers, looks up two handles and stores them in globals, then registers the object with the shared block and runs its update. */
extern char D_00381A50[];
extern char D_0020D930[];
extern int D_001F60A4;
extern int D_001F60A8;
extern void func_1B6E88(void);
extern void func_0E8808(int a);
extern int func_1206C0(unsigned int key);
extern void func_1B7078(void *o);
extern void func_1B7B90(char *block, char *table, void *o);
extern void func_1B7E90(char *block);

void func_1507F8(void *o)
{
    char *block;

    ((void (*)(void *))func_1B6E88)(o);
    func_0E8808(7);
    D_001F60A4 = func_1206C0(0xC28DA8E0u);
    D_001F60A8 = func_1206C0(0xFF1208D1u);
    func_1B7078(o);
    block = D_00381A50;
    func_1B7B90(block, D_0020D930, o);
    func_1B7E90(block);
}
