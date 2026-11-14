/* LEVEL_04:0x1D9A28 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_083F98(int handle);
extern void func_1E8560(void);
extern void func_1DA258(Item *item);

void func_1D9A28(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_083F98(rec->handle);
        rec->handle = 0;
    }
    func_1E8560();
    func_1DA258(item);
}
