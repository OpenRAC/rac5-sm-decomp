/* LEVEL_08:0x1FE9A8 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_088AA8(int handle);
extern void func_211068(void);
extern void func_1FF1D8(Item *item);

void func_1FE9A8(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_088AA8(rec->handle);
        rec->handle = 0;
    }
    func_211068();
    func_1FF1D8(item);
}
