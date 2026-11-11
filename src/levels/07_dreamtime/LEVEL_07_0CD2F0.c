/* LEVEL_07:0x0CD2F0 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_00215818[];
extern int D_00215564;
extern int func_0B8080(int a);
extern int func_01AF58(void);
extern void func_089EB8(int);

void func_0CD2F0(void)
{
    D_00215818[D_00215564].f = 4;
    func_0B8080(7);
    if (func_01AF58() != 0) {
        func_089EB8(2);
    }
}
