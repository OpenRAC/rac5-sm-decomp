/* LEVEL_10:0x1CAB48 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_081168(int handle);
extern void func_1D5920(void);
extern void func_1CB378(Item *item);

void func_1CAB48(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_081168(rec->handle);
        rec->handle = 0;
    }
    func_1D5920();
    func_1CB378(item);
}
