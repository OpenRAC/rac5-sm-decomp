/* LEVEL_06:0x092648 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_09B390(int a0);
extern void func_09B0E0(int a0);
extern void func_09B1A0(int a0);
extern void func_09B380(int a0, int a1, int a2);
extern void func_09B370(int a0, unsigned int a1, unsigned int a2);
extern void func_09B1E0(int a0);
extern void func_09B260(int a0, int a1);
extern void func_09D410(void);
extern int *D_001F5990;

void func_092648(void)
{
    func_09B390(0);
    func_09B0E0(5);
    func_09B1A0(0);
    func_09B380(1, 0, 0);
    func_09B370(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_09B1E0(*D_001F5990);
    func_09B260(0, 0);
    func_09D410();
}
