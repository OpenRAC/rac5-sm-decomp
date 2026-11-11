/* LEVEL_10:0x1A5F40 -- forwards the sub-record at offset 0x58 of the item's state to the record handler. */
extern void func_097AB8(char *record);

void func_1A5F40(char *item)
{
    func_097AB8(*(char **)(item + 0x58) + 0x58);
}
