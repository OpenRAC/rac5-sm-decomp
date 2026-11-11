/* LEVEL_24:0x092890 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_09A438(int a0);
extern void func_09A188(int a0);
extern void func_09A248(int a0);
extern void func_09A428(int a0, int a1, int a2);
extern void func_09A418(int a0, unsigned int a1, unsigned int a2);
extern void func_09A288(int a0);
extern void func_09A308(int a0, int a1);
extern void func_09C4B8(void);
extern int *D_001D7A10;

void func_092890(int flag)
{
    func_09A438(0);
    func_09A188(5);
    func_09A248(0);
    func_09A428(1, 0, 0);
    func_09A418(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_09A288(*D_001D7A10);
    func_09A308(0, 0);
    func_09C4B8();
}
