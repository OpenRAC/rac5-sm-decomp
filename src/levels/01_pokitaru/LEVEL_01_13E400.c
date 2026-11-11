/* LEVEL_01:0x13E400 -- forwards the object, its word at +0x58 and the shared record to the effect helper with a full-scale float. */
extern char D_0021B7A8[];
extern void func_1CFF28(char *a0, int a1, char *a2, float f12);

void func_13E400(char *item)
{
    func_1CFF28(item, *(int *)(item + 0x58), D_0021B7A8, 1.0f);
}
