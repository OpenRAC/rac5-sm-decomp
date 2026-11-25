/* LEVEL_02:0x174AF8 -- sets up the scene: runs the setup helpers, looks up two handles and stores them in globals, then registers the object with the shared block and runs its update. */
extern char D_003ACB10[];
extern char D_00236830[];
extern int D_0021C624;
extern int D_0021C628;
extern void func_1DFB40(void);
extern void func_0F58F8(int a);
extern int func_130418(unsigned int key);
extern void func_1DFD30(void *o);
extern void func_1E0848(char *block, char *table, void *o);
extern void func_1E0B48(char *block);

void func_174AF8(void *o)
{
    char *block;

    ((void (*)(void *))func_1DFB40)(o);
    func_0F58F8(7);
    D_0021C624 = func_130418(0xC28DA8E0u);
    D_0021C628 = func_130418(0xFF1208D1u);
    func_1DFD30(o);
    block = D_003ACB10;
    func_1E0848(block, D_00236830, o);
    func_1E0B48(block);
}
