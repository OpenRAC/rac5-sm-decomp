/* LEVEL_09:0x1AD7C0 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_07D5B8(int handle);
extern void func_1B8478(void);
extern void func_1ADFF0(Item *item);

void func_1AD7C0(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_07D5B8(rec->handle);
        rec->handle = 0;
    }
    func_1B8478();
    func_1ADFF0(item);
}
