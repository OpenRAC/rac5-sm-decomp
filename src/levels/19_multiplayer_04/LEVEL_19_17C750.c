/* LEVEL_19:0x17C750 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_0737C8(int handle);
extern void func_1860A8(void);
extern void func_17CF90(Item *item);

void func_17C750(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_0737C8(rec->handle);
        rec->handle = 0;
    }
    func_1860A8();
    func_17CF90(item);
}
