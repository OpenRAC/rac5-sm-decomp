/* LEVEL_06:0x1B3A58 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_07A718(int handle);
extern void func_1BD558(void);
extern void func_1B4288(Item *item);

void func_1B3A58(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_07A718(rec->handle);
        rec->handle = 0;
    }
    func_1BD558();
    func_1B4288(item);
}
