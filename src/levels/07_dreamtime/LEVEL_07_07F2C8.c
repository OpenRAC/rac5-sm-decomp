/* LEVEL_07:0x07F2C8 -- placement copy of LEVEL_01_07D160.c: reports whether the record's handle is still usable: always when it has none, else according to the 0x10000 flag while the handle is live or the 0x8000 flag once it is not. */
typedef struct Record {
    char pad_00[0x60];
    int handle;
    unsigned int flags;
} Record;

extern int D_0022F4F0;
extern int func_028218(int context, int handle);

int func_07F2C8(Record *record)
{
    if (record->handle != 0) {
        if (func_028218(D_0022F4F0, record->handle) < 1) {
            if ((record->flags & 0x8000) == 0)
                return 0;
        } else {
            if ((record->flags & 0x10000) == 0)
                return 0;
        }
    }
    return 1;
}
