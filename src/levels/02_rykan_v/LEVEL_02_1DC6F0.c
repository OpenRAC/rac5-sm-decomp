/* LEVEL_02:0x1DC6F0 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_087408(int handle);
extern void func_1E6210(void);
extern void func_1DCF20(Item *item);

void func_1DC6F0(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_087408(rec->handle);
        rec->handle = 0;
    }
    func_1E6210();
    func_1DCF20(item);
}
