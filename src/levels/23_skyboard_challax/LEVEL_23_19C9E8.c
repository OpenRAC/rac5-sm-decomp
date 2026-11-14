/* LEVEL_23:0x19C9E8 -- placement copy of LEVEL_01_1C72A0.c: releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_077F38(int handle);
extern void func_1A2F10(void);
extern void func_19D218(Item *item);

void func_19C9E8(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_077F38(rec->handle);
        rec->handle = 0;
    }
    func_1A2F10();
    func_19D218(item);
}
