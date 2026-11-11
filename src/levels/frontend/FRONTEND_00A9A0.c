/* FRONTEND:0x00A9A0 -- placement copy of LEVEL_01_0A5E00.c. */
extern char D_001230C8[];
extern void func_00AC60(void *, unsigned char);

void func_00A9A0(int index, unsigned char value)
{
    func_00AC60(D_001230C8 + index * 0x18, value);
}
