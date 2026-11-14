/* LEVEL_22:0x138AD8 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_073510(int handle);
extern void func_13CB68(void);
extern void func_139308(Item *item);

void func_138AD8(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_073510(rec->handle);
        rec->handle = 0;
    }
    func_13CB68();
    func_139308(item);
}
