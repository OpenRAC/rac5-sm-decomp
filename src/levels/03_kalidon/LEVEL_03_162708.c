/* LEVEL_03:0x162708 -- merges a global value into the 11-bit field at bit 16 of the control word, then notifies slot 0x17. */
extern int D_002B2CA8;
extern unsigned int D_0021FCDC;
extern void func_0EDFE0(int index);

void func_162708(void)
{
    D_0021FCDC = (D_0021FCDC & 0xF800FFFF) | (D_002B2CA8 << 16);
    func_0EDFE0(0x17);
}
