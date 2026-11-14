/* LEVEL_01:0x1C72A0 -- releases the record's handle, runs the global cleanup and finishes the item. */
typedef struct { char pad_00[0xF4]; int handle; } Rec;
typedef struct { char pad_00[0x58]; Rec *rec; } Item;

extern void func_080B38(int handle);
extern void func_1D1578(void);
extern void func_1C7AD0(Item *item);

void func_1C72A0(Item *item)
{
    Rec *rec = item->rec;

    if (rec->handle != 0) {
        func_080B38(rec->handle);
        rec->handle = 0;
    }
    func_1D1578();
    func_1C7AD0(item);
}
