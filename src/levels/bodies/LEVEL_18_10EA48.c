/* LEVEL_18:0x10EA48 -- placement copy of FRONTEND_0209E0.c: latches a byte then pokes the subsystem. */
extern unsigned char D_001B5FE8[];

void func_0781B8(int);

void func_10EA48(int value)
{
    D_001B5FE8[0] = value;
    func_0781B8(value ^ 1);
}
