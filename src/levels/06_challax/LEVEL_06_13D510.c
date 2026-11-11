/* LEVEL_06:0x13D510 -- placement copy of LEVEL_01_13E400.c: forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_0020B770[];
extern void func_1BBF08(char *a0, int a1, char *a2, float f12);

void func_13D510(char *item)
{
    func_1BBF08(item, *(int *)(item + 0x58), D_0020B770, 1.0f);
}
