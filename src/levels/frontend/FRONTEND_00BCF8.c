/* FRONTEND:0x00BCF8 -- resets the two flags and clears the second bit. */
extern int D_002FDEC;
extern int D_002FDE8;

void func_00BD50(unsigned int, unsigned int, unsigned int, unsigned int,
                 unsigned int);

void func_00BCF8(void)
{
    func_00BD50(0, 0, 0x3FF, 0x3FF, 1);
    D_002FDEC &= 0xFFFFFFF7u;
    D_002FDE8 |= 8u;
}
