/* LEVEL_18:0x1800F0 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_072D30(int handle);
extern void func_18A7B0(void);
extern void func_180930(Item *item);

void func_1800F0(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_072D30(rec->handle);
        rec->handle = 0;
    }
    func_18A7B0();
    func_180930(item);
}
