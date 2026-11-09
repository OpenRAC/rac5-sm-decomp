/* LEVEL_18:0x0B9968 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001B0840[];
extern int D_001B058C;
extern void func_0A40A8(int);
extern int func_018250(void);
extern void func_078CA8(int);

void func_0B9968(void)
{
    D_001B0840[D_001B058C].f = 4;
    func_0A40A8(7);
    if (func_018250() != 0) {
        func_078CA8(2);
    }
}
