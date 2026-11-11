/* LEVEL_05:0x185300 -- releases and clears the handle held by the record that a record points to. */
typedef struct {
    char pad0[0x3C];
    char *handle;
} Nested;

typedef struct {
    char pad0[0x58];
    Nested *link;
} Record;

extern void func_07E1D8(char *record);

void func_185300(Record *record)
{
    Nested *nested = record->link;
    char *value = nested->handle;

    if (value != 0) {
        func_07E1D8(value);
        nested->handle = 0;
    }
}
