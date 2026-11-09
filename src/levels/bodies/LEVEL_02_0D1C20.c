/* LEVEL_02:0x0D1C20 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_002164D8[];
extern int D_00216224;
extern void func_0BC930(int);
extern int func_01B1F8(void);
extern void func_08E718(int);

void func_0D1C20(void)
{
    D_002164D8[D_00216224].f = 4;
    func_0BC930(7);
    if (func_01B1F8() != 0) {
        func_08E718(2);
    }
}
