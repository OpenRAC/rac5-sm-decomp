/* FRONTEND:0x0209E0 -- latches a byte then pokes the subsystem. */
extern unsigned char D_00032820[];

void func_004B98(int);

void func_0209E0(int value)
{
    D_00032820[0] = value;
    func_004B98(value ^ 1);
}
