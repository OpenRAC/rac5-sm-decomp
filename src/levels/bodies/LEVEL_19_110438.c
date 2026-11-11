/* LEVEL_19:0x110438 -- placement copy of FRONTEND_0209E0.c: latches a byte then pokes the subsystem. */
extern unsigned char D_001B5CE8[];

void func_078D20(int);

void func_110438(int value)
{
    D_001B5CE8[0] = value;
    func_078D20(value ^ 1);
}
