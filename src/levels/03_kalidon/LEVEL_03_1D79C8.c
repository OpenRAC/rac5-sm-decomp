/* LEVEL_03:0x1D79C8 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_080918(int handle);
extern void func_1E1D10(void);
extern void func_1D81F8(Item *item);

void func_1D79C8(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_080918(rec->handle);
        rec->handle = 0;
    }
    func_1E1D10();
    func_1D81F8(item);
}
