/* LEVEL_05:0x1548A8 -- placement copy of LEVEL_02_174AF8.c: sets up the scene: runs the setup helpers, looks up two handles and stores them in globals, then registers the object with the shared block and runs its update. */
extern char D_00380B68[];
extern char D_0020D720[];
extern int D_001F6514;
extern int D_001F6518;
extern void func_1B9E30(void);
extern void func_0EB888(int a);
extern int func_1259E0(unsigned int key);
extern void func_1BA020(void *o);
extern void func_1BAB38(char *block, char *table, void *o);
extern void func_1BAE38(char *block);

void func_1548A8(void *o)
{
    char *block;

    ((void (*)(void *))func_1B9E30)(o);
    func_0EB888(7);
    D_001F6514 = func_1259E0(0xC28DA8E0u);
    D_001F6518 = func_1259E0(0xFF1208D1u);
    func_1BA020(o);
    block = D_00380B68;
    func_1BAB38(block, D_0020D720, o);
    func_1BAE38(block);
}
