/* LEVEL_05:0x1B69E0 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_07E1D8(int handle);
extern void func_1C0208(void);
extern void func_1B7210(Item *item);

void func_1B69E0(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_07E1D8(rec->handle);
        rec->handle = 0;
    }
    func_1C0208();
    func_1B7210(item);
}
