/* LEVEL_08:0x0BD568 -- placement copy of LEVEL_04_0B7E80.c: stores a value, calls a helper, then stores a masked byte. */
extern int D_0024514C;
extern int D_00245144;
extern int func_0BD558(void);

void func_0BD568(int first, unsigned int second)
{
    int masked = second & 0xff;
    D_0024514C = first;
    func_0BD558();
    D_00245144 = masked;
}
