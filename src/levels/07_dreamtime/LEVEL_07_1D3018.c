/* LEVEL_07:0x1D3018 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_082CA0(int handle);
extern void func_1DE4C8(void);
extern void func_1D3848(Item *item);

void func_1D3018(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_082CA0(rec->handle);
        rec->handle = 0;
    }
    func_1DE4C8();
    func_1D3848(item);
}
