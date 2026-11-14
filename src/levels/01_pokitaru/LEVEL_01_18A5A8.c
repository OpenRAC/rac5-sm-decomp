/* LEVEL_01:0x18A5A8 -- sets flag byte 1 of the table entry 1 to 1 with a full clear mask. */
extern void func_027480(int index, unsigned char set, unsigned char clear);

void func_18A5A8(void)
{
    func_027480(1, 1, 0xFF);
}
