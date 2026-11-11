/* LEVEL_20:0x0E2B80 -- placement copy of FRONTEND_0209E0.c: latches a byte then pokes the subsystem. */
extern unsigned char D_00117228[];

void func_0664A8(int);

void func_0E2B80(int value)
{
    D_00117228[0] = value;
    func_0664A8(value ^ 1);
}
