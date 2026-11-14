/* LEVEL_16:0x17FAB8 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_073680(int handle);
extern void func_189310(void);
extern void func_1802F8(Item *item);

void func_17FAB8(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_073680(rec->handle);
        rec->handle = 0;
    }
    func_189310();
    func_1802F8(item);
}
