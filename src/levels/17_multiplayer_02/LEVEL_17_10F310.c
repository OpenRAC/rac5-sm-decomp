/* LEVEL_17:0x10F310 -- placement copy of FRONTEND_0209E0.c: latches a byte then pokes the subsystem. */
extern unsigned char D_001A8168[];

void func_0792B0(int);

void func_10F310(int value)
{
    D_001A8168[0] = value;
    func_0792B0(value ^ 1);
}
