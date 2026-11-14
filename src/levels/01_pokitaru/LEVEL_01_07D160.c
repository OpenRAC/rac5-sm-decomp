/* LEVEL_01:0x07D160 -- reports whether the record's handle is still usable: always when it has none, else according to the 0x10000 flag while the handle is live or the 0x8000 flag once it is not. */
typedef struct Record {
    char pad_00[0x60];
    int handle;
    unsigned int flags;
} Record;

extern int D_0021A7F0;
extern int func_027EB8(int context, int handle);

int func_07D160(Record *record)
{
    if (record->handle != 0) {
        if (func_027EB8(D_0021A7F0, record->handle) < 1) {
            if ((record->flags & 0x8000) == 0)
                return 0;
        } else {
            if ((record->flags & 0x10000) == 0)
                return 0;
        }
    }
    return 1;
}
