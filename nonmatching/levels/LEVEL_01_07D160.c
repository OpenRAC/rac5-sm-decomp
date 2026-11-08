/* LEVEL_01.REL:0x07D160: reviewed 104-byte candidate.
 * pinned C with gnu-ee-trial links 92 bytes; first differs at +20.
 * Retry: Establish the flags field's original access type and condition shape that
 * keeps whole-word mask reads and the retail branch layout.
 * No matching credit.
 */
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
            if (record->flags & 0x8000)
                return 1;
            return 0;
        }
        if ((record->flags & 0x10000) == 0)
            return 0;
    }
    return 1;
}
