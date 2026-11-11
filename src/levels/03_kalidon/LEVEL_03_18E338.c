/* LEVEL_03:0x18E338 -- releases the record at +0xA4 of the object's sub-record (if any) and clears the pointer. */
extern void func_080918(char *record);

void func_18E338(char *record)
{
    char *nested = *(char **)(record + 0x54);
    char *value = *(char **)(nested + 0xA4);
    if (value != 0) {
        func_080918(value);
        *(char **)(nested + 0xA4) = 0;
    }
}
