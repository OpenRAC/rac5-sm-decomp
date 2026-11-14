/* LEVEL_24:0x19B550 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_07B218(int handle);
extern void func_1A1A78(void);
extern void func_19BD80(Item *item);

void func_19B550(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_07B218(rec->handle);
        rec->handle = 0;
    }
    func_1A1A78();
    func_19BD80(item);
}
