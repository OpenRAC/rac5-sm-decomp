/* LEVEL_16:0x10FD98 -- placement copy of FRONTEND_0209E0.c: latches a byte then pokes the subsystem. */
extern unsigned char D_001B4B68[];

void func_078838(int);

void func_10FD98(int value)
{
    D_001B4B68[0] = value;
    func_078838(value ^ 1);
}
