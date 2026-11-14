/* LEVEL_17:0x173100 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_073DB0(int handle);
extern void func_17C958(void);
extern void func_173940(Item *item);

void func_173100(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_073DB0(rec->handle);
        rec->handle = 0;
    }
    func_17C958();
    func_173940(item);
}
